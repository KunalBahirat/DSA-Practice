#include <iostream>
using namespace std;
void waveSort(int a[],int n){
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            swap(a[i],a[i-1]);
        }
        else if(a[i]>a[i+1] & i<=n-2){
            swap(a[i],a[i+1]);
        }
    }
}
int main(){
    int arr[]={1,3,4,7,5,6,2};
    waveSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}