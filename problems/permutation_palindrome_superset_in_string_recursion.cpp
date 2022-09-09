#include <bits/stdc++.h>
using namespace std;
void permute(string s,string ans){
    if(s.length()==0) {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char c=s[i];
        string ros=s.substr(0,i)+ s.substr(i+1);
        permute(ros,ans+c);
    }
}
bool palindrome(string s,int l,int h){
    if(l>=h){
        return true;
    }
    if(s[l]!=s[h]) return false;
    return palindrome(s,l+1,h-1);
}

void superset(string s,int i,string curr){
    if(i==s.length()){
        cout<<curr<<endl;
        return;
    }
    superset(s,i+1,curr+s[i]);
    superset(s,i+1,curr);
}
int main(){

    string str="abc";
    permute(str,"");


    string s="abc";
    // cout<<palindrome(s,0,s.length()-1);
    superset(s,0,"");
    return 0;
}