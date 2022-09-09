#include <bits/stdc++.h>
using namespace std;
int checkdpl(int a[],int n){
    int slow=0;int fast=0;
    do{
        slow=a[slow];
        fast=a[a[fast]];
    }while(slow!=fast);
    fast=0;
    while(slow!=fast){
        slow=a[slow];
        fast=a[fast];
    }
    return slow;
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
     int a[]={1,3,4,2,2};int n1=5;
    int b[]={2,5,9,6,9,3,8,9,7,1};int n2=10;
    int y[]={7,8,9,4,5,5,6,1,2,3,50};int n3=11;
    cout<<checkdpl(a,n1)<<endl;
    cout<<checkdpl(b,n2)<<endl;
    cout<<checkdpl(y,n3)<<endl;
    return 0;
}