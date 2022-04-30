#include <iostream>
using namespace std;

int main(){
    //Moving elements to one side of array
    
    int arr[6]={1,-1,2,-2,-3,3};
    int a=6;
    int x=0,y=a-1;
    while(x<y){
        while(arr[x]<0){x++;}
        while(arr[y]>0){y--;}
        if(x<y){
            int temp=arr[x];
            arr[x]=arr[y];
            arr[y]=temp;
        }
    }
    cout<<"\n{";
    for(int j=0;j<a;j++){
        cout<<arr[j]<<" ";
    }
    
    return 0;
}