#include <bits/stdc++.h>
using namespace std;
void peak_ele(int a[],int n){
    if(a[0]>a[1]) cout<<a[0]<<" ";
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1] and a[i]>a[i+1]) cout<<a[i]<<" ";
    }
}
int main(){
    // int n;
    // cin>>n; int a[n];
    // for(int i=0;i<n;i++){
        // cin>>a[i];
    // }
    // peak_ele(a,n);
    // cout<<endl;
    int n=7;
    int a[n]={10, 20, 15, 2 ,23, 90, 67};
    peak(a,n,0);
    return 0;
}