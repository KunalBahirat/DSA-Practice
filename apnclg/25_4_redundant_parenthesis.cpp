#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool is_operator(char c){
    if(c=='+' or c=='-' or c=='*' or c=='/') return true;
    else return false;
}
int main(){
    string s;
    cin>>s;
    stack <char> stk;
    int count=0;
    for(int i=0;i<s.length();i++){
       if(s[i]=='(') stk.push(s[i]);
        else if(is_operator(s[i])){
            stk.push(s[i]);
        }
        else if(s[i]==')') {
            if(stk.empty()) {
                count++;
                i;
            }
            else if(stk.top()=='('){
                count++;
                stk.pop();
            }
            while(is_operator(stk.top())){
                stk.pop();
            }
            
        }
    }
    cout<<count<<endl;

    return 0;
}