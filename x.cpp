#include <iostream>
using namespace std;

int main(){
    int m=3,n=4;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>a[i][j]; 
        } 
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<a[i][j]<<" "; 
        } 
        cout<<"\n";
    }
    return 0;
}