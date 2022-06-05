// Finding maximum between four numbers
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void max(int k,int l,int m,int n){
    int maximum=max(k,max(l,max(m,n)));
    if (maximum== k){
        cout<<"Maximum is "<<k;
    }
    else if (maximum== l){
        cout<<"Maximum is "<<l;
    }
    else if (maximum== m){
        cout<<"Maximum is "<<m;
    }
    else if (maximum== n){
        cout<<"Maximum is "<<n;
    }
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    max(a,b,c,d);
}