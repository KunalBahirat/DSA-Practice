#include <iostream>
using namespace std;
void maxMin(int arr[],int length){
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<length;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"MAX="<<max<<endl;
    cout<<"MIN="<<min<<endl;
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
    int i;
    for(i=0;i<a;i++){
        cin>>arr[i];
    }
    display(arr,a);
    maxMin(arr,a);


    return 0;
}