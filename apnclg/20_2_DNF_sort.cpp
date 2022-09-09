#include "bits/stdc++.h"
#include <iostream>
using namespace std;

void dnfSort(int a[],int n){
    int l=0;int h=n-1; int mid=0;
    while(mid<=h){
        switch(a[mid]){
            case 0:
                swap(a[l++],a[mid++]);
                // l++;mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid],a[h--]);
                break;
                
        }
    }

}
int main(){
    // int arr[10]={1,1,2,0,0,1,2,2,1,0};
    int arr[5]={0,2,1,2,0};
    dnfSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}