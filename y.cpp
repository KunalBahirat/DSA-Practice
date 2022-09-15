#include <iostream>
using namespace std;
void heapify(int a[],int n){
    
}
int insert(int a[],int n){
    int i=n;
    int temp=a[n];
    while(i>1 and a[i/2]<temp){
        a[i]=a[i/2];
        i/=2;
    }
    a[i]=temp;
}
void create_heap(int a[],int n){
    for(int i=2;i<n;i++){
        insert(a,i);
    }
}
void delete_(int a[],int n){
    int x=a[1];
    a[1]=a[n];
    int i=1;int j=i*2;
    while(j<n){
        if(a[j]<a[j+1]){
            j++;
        }
        if(a[i]<a[j]){
            swap(a[i],a[j]);
            i=j;
            j*=2;
        }
        else break;
    }
    a[n]=x;
}
void heap_sort(int a[],int n){
    create_heap(a,n);
    
    for(int i=1;i<n;i++){
        delete_(a,n-i);
    }
}
int main(){
    int n=7;
    int a[n]={0,12, 11, 13, 5, 6, 7};
    // heap_sort(a,n);
    heap_sort(a,n);
    for(int i=1;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}