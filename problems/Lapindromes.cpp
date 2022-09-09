#include <bits/stdc++.h>
using namespace std;
void equal_strings(string s1,string s2){
    int aux1[26]={0};
    int aux2[26]={0};
    for(int i=0;i<s1.length();i++){
        aux1[s1[i]-'a']++;
        aux2[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(aux1[i]!=aux2[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
void lapindrome(string s){
    if(s.length()%2==0){
        equal_strings(s.substr(0,s.length()/2),s.substr(s.length()/2));
    }
    else if(s.length()%2!=0){
        equal_strings(s.substr(0,s.length()/2),s.substr((s.length()/2)+1));
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        lapindrome(s);
    }
    return 0;
}