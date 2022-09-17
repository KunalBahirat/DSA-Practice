#include <iostream>
#include <algorithm>
using namespace std;

int majorityElement(int arr[], int n)
{
    if(n==0) return -1;
    if(n==1) return arr[0];
    int mf=n/2;
    sort(arr,arr+n);
    int i=0;
    while(i<n){
        int num=arr[i++];int freq=1;
        while(i<n and arr[i]==num){
            freq++;i++;
        }      
        cout<<num<<" "<<freq<<endl;
        if(freq>=mf) return num;
    }
    return -1;
}

//  boyer - moore voting algorithm
int majorityElement(int a[], int size)
    {
        if(size==0) return -1;
        if(size==1) return a[0];
        int num,freq=0;
        for(int i=0;i<size;i++){
            if(freq==0){
                num=a[i];freq=1;
            }
            else if(a[i]==num){
                freq++;
            }
            else if(a[i]!=num){
                freq--;
            }
        }
        if(freq>0){
            freq=0;
            for(int i=0;i<size;i++){
               if(a[i]==num) freq++; 
            }
        }
        if(freq>=(size/2)) return num;
        return -1;
    }
int main(){
    int a[]={1,1,1,2,2,2,2,3};
    int n=8;
    cout<<majorityElement(a,n);
    return 0;
}