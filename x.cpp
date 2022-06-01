#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if (ceil((double)sqrt(a[i])) == floor((double)sqrt(a[i]))) {
            ans+=sqrt(a[i]);
        }
    }
    cout<<ans;
    return 0;
}