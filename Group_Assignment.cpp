#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int i=0;
        while(i<n){
            if(i==a[i]){
                cout<<"NO"<<"\n";
                break;
            }
            if(i+=i < n){
                i+=i < n;
            }
        }
        // for(i=0;i<n;i+=i){
            
        // }
        if(i==n)
        cout<<"YES"<<"\n";
    }
	return 0;
}
