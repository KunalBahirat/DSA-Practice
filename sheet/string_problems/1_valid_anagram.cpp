
#include <iostream>
#include "bits/stdc++.h"
#include <string>
#include <algorithm>
using namespace std;
bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    int n = s.length();
    int hash1[26], hash2[26];
    for (int i = 0; i < 26; i++)
    {
        hash1[i] = 0;
        hash2[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        hash1[s[i] - 97] += 1;
        hash2[t[i] - 97] += 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (hash1[i] != hash2[i])
        {
            cout << "NO!";
            return false;
        }
    }
    return true;
}
int main()
{
    string s,t;
    getline(cin, s);
    getline(cin, t);
    cin.ignore();
    cout << isAnagram(s,t);

    //     Input: s = "anagram", t = "nagaram"
    // Output: true
    // Example 2:

    // Input: s = "rat", t = "car"
    // Output: false
    return 0;
}