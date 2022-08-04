#include <iostream>
#include "bits/stdc++.h"
#include <string>
#include <algorithm>
using namespace std;


bool isPalindrome(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string str;
    for (int i = 0; i < s.length(); i++)
    {
        if (isalnum(s[i]))
        {
            str += s[i];
        }
    }
    for (int i = 0, j = str.length() - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    cin.ignore();
    if(isPalindrome(s)) cout<<"True";
    else cout<<false;

//     Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
    return 0;
}