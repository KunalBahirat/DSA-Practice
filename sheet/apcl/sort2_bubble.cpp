// repeatedly swap two adjacent elements if they are in the wrong order
// 	we have to perform n-1 iterations before we get our sorted array
// 		take counter=1,counter<n(because we are performing n-1 iter.),swap a[i] and a[i+1] if a[i] is greater

#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={20,40,30,10,50};
    int counter=1;
    while(counter<n){
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        
        counter++;

    }
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}