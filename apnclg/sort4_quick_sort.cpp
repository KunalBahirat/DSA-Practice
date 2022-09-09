#include <bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int h){
    int pivot=a[l];
    int i=l;int j=h;
    do{
        do{i++;}
            while(a[i]<=pivot);
        do{j--;}
            while(a[j]>pivot);
        if(i<j) swap(a[i],a[j]);
    }while(i<j);
    swap(a[j],a[l]);
    return j;
}
void QuickSort(int ar[],int l,int h){
    if(l<h){
        int j=partition(ar,l,h);
        QuickSort(ar,l,j);      
        QuickSort(ar,j+1,h);      
    }
}
int main(){
    int a[9]={50,70,60,90,40,80,10,20,30};
	QuickSort(a,0,9);
	for(int i=0;i<9;i++){
		cout<<a[i]<<" ";
	}
    cout<<"\n";
    return 0;
}