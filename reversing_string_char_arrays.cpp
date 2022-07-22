#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
// welcome to mettle
char * reverse(char * s){
    int n=strlen(s);
    stack <string> stk;
    for(int i=0;i<n;i++){
        string k="";
        while(s[i]!=' ' and i<n){
            k+=s[i];
            i++;
        }
        stk.push(k);
    }
    string temp="";
    while(!stk.empty()){
        temp+=(stk.top()+' ');
        stk.pop();
    }
    strcpy(s,temp.c_str());
    return s;
}
int main(){
    char c[30];
    cin.get(c,30);
    char *x=reverse(c);
    cout<<"Output"<<endl;
    cout<<x<<endl;
    cout<<c;

    return 0;
}