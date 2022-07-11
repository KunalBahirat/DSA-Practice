#include <iostream>
#include <string>
#include <algorithm>
#include "bits/stdc++.h"
using namespace std;
int isOperand(char x){
    return (x>='a' && x<='z')? 1:0;
}
int isOperator(char x){
    return (x=='+' || x=='-' || x=='/' || x=='*' ||x=='^') ? 1: 0;
}
int pre(char x){
    if(x=='+' ||x=='-')
        return 1;
    if(x=='*'||x=='/')
        return 2;
    if(x=='^')
        return 3;
    else{
        return -1;
    }
}
void infixtoPrefix(string s){
    stack <char> stk;
    reverse(s.begin(),s.end());
    string ans="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
            s[i]=')';
        else if(s[i]==')')
            s[i]='(';
    }

    for(int i=0;i<s.length();i++){
        if(isOperand(s[i]))
            ans+=s[i];
        else if(s[i]=='('){
            stk.push(s[i]);
        }
        else if(s[i]==')'){
            while(!stk.empty() && stk.top()!='('){
                ans+=stk.top();
                stk.pop();
            }
            if(!stk.empty()) stk.pop();
        }
        if(isOperator(s[i])){
            while( !stk.empty() && (pre(s[i]) < pre(stk.top())) ){
                ans+=stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }
    } 
    while(!stk.empty()){
        ans+=stk.top();
        stk.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}
int main(){
    string s="(a-b/c)*(a/k-l)";
    infixtoPrefix(s);
    return 0;
}