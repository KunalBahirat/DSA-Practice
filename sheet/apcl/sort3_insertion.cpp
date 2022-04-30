// Insert an element from unsorted array to its correct position in sorted arr
// 		take loop starting from pos 1 ,take current element as arr[i] & j=i-1 if j>i move j by 1 pos

#include <iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n]={12,45,23,51,19,8};
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}