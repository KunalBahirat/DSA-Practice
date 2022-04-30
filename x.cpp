#include <iostream>
using namespace std;

void selectionSort(int a[],int n){
    int i=0,j=1;
    for(i=0;i<n-1;i++){
        for (j =i+1; j<n; j++)
        {
            if(a[j]<a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    for(int x=0;x<n;x++){
        cout<<a[x]<<" ";
    }
}
void bubbleSort(int a[],int n){
    int counter=1;
    while (counter<n)
    {
        for (int i = 0; i <n-counter; i++)
        {
            if(a[i+1]<a[i]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        counter++;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubbleSort(a,n);
    return 0;
}