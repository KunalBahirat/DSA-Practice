#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;int msg[n];
        cin>>msg[0];int count=0;
        for(int i=1;i<n;i++){
            cin>>msg[i];
        }
        if(n==1) {
            cout<<count<<endl;
            continue;
        }
        if(msg[0]!=msg[1]) count++;
        for(int i=1;i<n-1;i++){
            if(msg[i-1]!=msg[i] or msg[i]!=msg[i+1]) count++;
        }
        if(msg[n-2]!=msg[n-1]) count++;
        cout<<count<<endl;
    }
    return 0;
}