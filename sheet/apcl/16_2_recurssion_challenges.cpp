#include <iostream>
using namespace std;
void dec(int n ){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
void incr(int n){
    if(n==0){
        return ;
    }
    incr(n-1);
    cout<<n<<" ";
}

//by iteration method
void occurance(int a[],int n,int k){
    int i=0;int last=-1;int first=-1;
    while(i<n){
        if(a[i]==k){
            if(first==-1)
                first=i;
            last=i;
        }
        i++;

    }
    cout<<"First "<<first;
    cout<<endl<<"Last "<<last;

}
//by recursion
// 1 2 3 4 5 6
int firstOccur(int a[],int n,int k,int i){
    if(i==n){
        return -1;
    }
    if(a[i]==k){
        return  i;
    }
    return firstOccur(a,n,k,i+1);
}

int lastOccur(int a[],int n,int k,int i){
    if(i==n){
        return -1;
    }
    int restArray=lastOccur(a,n,k,i+1);
    if(restArray!=-1){
        return restArray;
    }
    if(a[i]==k){
        return i;
    }
    return -1;

}
int main(){

    //Printing Nos in Decreasing and Increasing order
    // int n;cin>>n;
    // dec(n);
    // cout<<endl;
    // incr(n);


    //finding First and last occurance of an elemment
    int a[9]={1,2,3,2,4,2,5,6,7};
    // cout<<firstOccur(a,9,2,0);
    cout<<lastOccur(a,9,2,0);


    return 0;
}