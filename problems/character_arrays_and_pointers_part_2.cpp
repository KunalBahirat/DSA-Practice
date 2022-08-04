#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(char *x){
    while(*x !='\0'){
        cout<<*x;
        x++;
    }
    cout<<endl;
}
int main(){
    // char c[]="HELLO WORLD";   // string gets stored in space allocated for array
    
    char *c="HELLO";    // String gets stored as a constant at compile time 
    
    // c[0]='k';  // Error we cannot edit string literal passed to pointer
    // char d="hello";
    print(c);




    //string class
    // string x;
    // getline(cin,x);
    // cout<<x;
    return 0;
}