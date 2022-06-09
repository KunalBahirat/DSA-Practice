#include <iostream>
using namespace std;

int linearSearch2(int arr[],int i,int n,int k){
    if(i==n){
        return -1;
    }
    if(arr[i]==k){
        return i;
    }

    linearSearch2(arr,i+1,n,k);
}
int main(){
    int arr[10]={5489,451,4500,21,2155,7,111111};\
    cout<<linearSearch2(arr,0,7,7);

    return 0;
}