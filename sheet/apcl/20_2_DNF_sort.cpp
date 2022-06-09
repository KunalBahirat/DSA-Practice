#include "bits/stdc++.h"
#include <iostream>
using namespace std;

void dnfSort(int a[],int n){
    int l=0,mid=0;
    int h=n-1;
    while(mid!=h){
        if(a[mid]==1){
            mid++;
        }
        else if(a[mid]==0){
            swap(a[mid],a[l]);
            mid++;l++;
        }
        else if(a[mid]==2){
            swap(a[mid],a[h]);
            mid++;h--;
        }
    }

}
int main(){
    int arr[10]={1,1,2,0,0,1,2,2,1,0};
    dnfSort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}