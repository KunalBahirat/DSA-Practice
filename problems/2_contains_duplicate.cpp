#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int hash[100];
    for(int i=0;i<100;i++){
        hash[i]=0;
    }
    for(int i=0;i<n;i++){
        hash[a[i]]+=1;
    }
    for(int i=0;i<100;i++){
        if(hash[i]>1){
            cout<<"TRUE";
            return 0;
        }
    }
    cout<<"FALSE";
    return 0;
}