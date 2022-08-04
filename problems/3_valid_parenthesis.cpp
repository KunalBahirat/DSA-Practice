#include <iostream>
#include <string>
#include "bits/stdc++.h"
#include <algorithm>
using namespace std;

bool validPar(string s){
    stack <char> stk;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            stk.push(s[i]);
        }
        else if(s[i]==')' or s[i]==']' or s[i]=='}'){
            if(stk.empty()){
                return false;
            }
            else if(s[i]==')' and stk.top()!='('){
                return false;
            }
            else if(s[i]==']' and stk.top()!='['){
                return false;
            }
            else if(s[i]=='}' and stk.top()!='{'){
                return false;
            }
            else{
                stk.pop();
            }
        }
    }if(stk.empty()){
        return true;
    }
    else    
        return false;

}
int main(){ 
    string s;
    cin>>s;
    cout<<validPar(s);
    return 0;
}

// for(int i=0;i<n;i++){
//     if (ceil((double)sqrt(a[i])) == floor((double)sqrt(a[i]))) {
//         ans+=sqrt(a[i]);
//     }
// }