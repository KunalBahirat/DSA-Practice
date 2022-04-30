#include <iostream>
using namespace std;
void reverse(int arr[],int length){
    for(int i=0,j=length-1;i<j;i++,j--){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void display(int arr[],int length){
    cout<<"Array= {";
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;
}
int main(){
    cout<<"enter no of elements";
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    display(arr,a);
    reverse(arr,a);
    display(arr,a);

}