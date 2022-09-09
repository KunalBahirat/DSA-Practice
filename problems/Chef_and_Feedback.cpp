#include <bits/stdc++.h>
using namespace std;
void feedback(string s){
    for(int i=0;i<s.length();i++){
            if(s[i]=='1' and (i+2)<s.length()){
                if(s[i+1]=='0' and s[i+2]=='1'){
                    cout<<"Good"<<endl;
                    return;
                }
            }
            if(s[i]=='0' and (i+2)<s.length()){
                if(s[i+1]=='1' and s[i+2]=='0'){
                    cout<<"Good"<<endl;
                    return;
                }
            }
    }
    cout<<"Bad"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;  // 010 101
        cin>>s;
        feedback(s);
        
    }
    return 0;
}