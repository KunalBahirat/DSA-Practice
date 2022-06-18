#include <iostream>
#include "bits/stdc++.h"
using namespace std;
bool valid_Parenthesis(string s){
    stack <char> stk;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            stk.push(s[i]);
        }
        else if(s[i]=='}' || s[i]==']' || s[i]==')'){     // 40 41=() 91 93 =[] 123 125 {}
            if(stk.empty())
                return false;
            if((s[i]==125 && stk.top()==123) || ((s[i]==41 && stk.top()==40)) || (s[i]==93 && stk.top()==91))
                stk.pop();
        }
    }
    return (stk.empty()) ? true :false; 
    
}
int main(){
    stack <char> stk;
    string a;
    cin>>a;
    cout<<valid_Parenthesis(a);
    return 0;
}