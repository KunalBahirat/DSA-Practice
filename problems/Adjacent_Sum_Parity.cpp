#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin>>cases;
    while(cases--){
        int n;
        cin>>n;
        int xor_value=0;
        for(int i=0;i<n;i++){
            int binary_value;
            cin>>binary_value;
            xor_value=xor_value^binary_value;
        }
        if(xor_value!=0){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}