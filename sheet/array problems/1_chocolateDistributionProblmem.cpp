#include "bits/stdc++.h"
#include <iostream>
using namespace std;
// https://www.geeksforgeeks.org/chocolate-distribution-problem/
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int minDiff=INT_MAX;
    for(int i=0;(i+m-1)<n;i++){
        int diff=a[i+m-1]-a[i];
        if(diff<minDiff)
            minDiff=diff;
    }
    cout<<minDiff;
    return 0;
}