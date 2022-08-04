#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main(){
    int testCases,n;
    cin>>testCases>>n;


    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int min_=INT_MAX;
    int max_=INT_MIN;
    for(int i=0;i<n;i++){
        if(max_<arr[i]) max_=i;
        if(min_>arr[i]) min_=i;
    }
    swap(arr[min_],arr[max_]);
    cout<<

    return 0;
}