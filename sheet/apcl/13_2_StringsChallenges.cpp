#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    // //converting to lowercase
    // string s1="KunAl";
    // for(int i=0;i<s1.length();i++){
    //     if(s1[i]>='A' and s1[i]<='Z'){
    //         s1[i]+=32;
    //     }
    // }
    // cout<<s1<<endl;

    // //converting to uppercase
    // for(int i=0;i<s1.length();i++){
    //     if(s1[i]>='a' and s1[i]<='z'){
    //         s1[i]-=32;
    //     }
    // }
    // cout<<s1<<endl;

    // transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    // cout<<s1<<endl;

    // transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    // cout<<s1<<endl;


    //Finding maximum number of string
    //"54321"
    // string str="53214";
    // sort(str.begin(),str.end(),greater<int>());
    // cout<<str;

    string x="abcccaacbade";
    int hash[26];
    for(int i=0;i<26;i++){
        hash[i]=0;
    }
    for(int i=0;i<x.length();i++){
        hash[x[i]-'a']++;
    }
    int maximum=0;char b;
    for(int i=0;i<26;i++){
        if(hash[i]>=maximum){
            maximum=hash[i];
            b=i+'a';
        }
    }
    cout<<maximum<<endl;
    cout<<b;
    return 0;
}