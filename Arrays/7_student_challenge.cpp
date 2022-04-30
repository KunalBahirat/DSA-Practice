#include <iostream>
using namespace std;
int main(){
    //Sorted array 
    // int arr[6]={1,2,3,5,6,7};
    // int i;int sum=0,n=7;
    // for(i=0;i<6;i++){
    //     sum=sum+arr[i];
    // }
    // int s=(n*(n+1))/2;
    // cout<<"Missing element="<<s-sum<<endl;

    // sorted array one missing element
    // int arr[6]={6,7,9,10,11,12};
    // int l=arr[0],h=arr[5],length=6;
    // int diff=arr[0];
    // for(int i=0;i<length;i++){
    //     if((arr[i]-i)!=diff){
    //         cout<<"Missing element="<<arr[i]<<endl;
    //         break;
    //     }
    // }

    //sorted array multiple missing elements
    // int arr[10]={12,13,16,17,18,19,20,25,26,27};
    // int i,diff=arr[0];
    // for (i = 0; i<12; i++)
    // {
    //     while(diff<arr[i]-i){
    //         cout<<i+diff<<endl;
    //         diff++;
    //     }
    // }


    //sorted array multiple missing elements using hash table
    int arr[10]={12,13,16,17,18,19,20,25,26,27};
    int length=sizeof(arr)/sizeof(arr[0]);
    cout<<length<<endl;
    int l=arr[0],h=arr[length-1];
    int arr2[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<length;i++){
        arr2[arr[i]]=arr2[arr[i]]+1;
    }
    cout<<"Missing elements ";
    for(int j=1;j<=h;j++){
        
        if(arr2[j]==0){
            cout<<j<<" ";
        }
    }
    


    return 0;
}