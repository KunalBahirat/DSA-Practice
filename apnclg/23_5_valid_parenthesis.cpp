#include <iostream>
#include "bits/stdc++.h"
using namespace std;
bool valid_Parenthesis(string s){
        stack <char> stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                stk.push(s[i]);   
            }
            else if(s[i]==')' or s[i]=='}' or s[i]==']'){
                if(stk.empty()){
                    return false;
                }
                else if((s[i]==')' and stk.top() != '(') or (s[i]==']' and stk.top() != '[') or (s[i]=='}' and stk.top() != '{') ) {
                    return false;
                } 
                else stk.pop();
            }
        }
        return stk.empty() ? true :false;
    
}
int main(){
    stack <char> stk;
    string a;
    cin>>a;
    cout<<valid_Parenthesis(a);
    return 0;
}