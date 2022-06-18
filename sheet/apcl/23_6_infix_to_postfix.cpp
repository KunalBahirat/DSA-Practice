#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int isOperand(char x){
    if((x>='A' && x<='Z' )|| (x>='a' && x<='z') ){
        return 1;
    }
    else{
        return 0;
    }
}
int isOpeartor(char x){
    if(x=='+' ||x=='-' ||x=='*' ||x=='/' ||x=='(' ||x==')' || x=='^'){
        return  1;
    }
    return 0;
}

int outStackpre(char x){
    if(x=='+' || x=='-') return 1;
    if(x=='*'|| x=='/') return 3;
    if(x=='^') return 6;
    if(x=='(') return 7;
}
int inStackpre(char x){
    if(x=='+' || x=='-') return 2;
    if(x=='*'|| x=='/') return 4;
    if(x=='^') return 5;
    if(x=='(') return 0;
}
void Convert(char infix[],int len){
    stack <char> st;
    int i=0;
    while(infix[i]!='\0'){
        if(isOperand(infix[i])){
            cout<<infix[i++];
        }
        else if(st.empty() || outStackpre(infix[i]) > inStackpre(st.top()) ){
            st.push(infix[i++]);
        }
        else if( outStackpre(infix[i])< inStackpre(st.top()) ){
            cout<<st.top();
            st.pop();
        }
        else if(infix[i] == ')' && st.top()=='('){
            st.pop();i++;
        }
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
int main(){
    

    int n;
    cin>>n;
    char infix[n];
    cin>>infix;
    int len=0;
    while(infix[len]!='\0') len++;
    Convert(infix,len);

    return 0;
}
