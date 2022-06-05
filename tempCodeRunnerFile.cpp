#include <iostream>
using namespace std;

int main(){
    
    int n=11;
    int a[n]={1,2,4,6,8,9,10,11,12,13,14};
    int count=1,diff=a[1]-a[0];
    for(int i=2;i<n;i++){
        if((a[i]-a[i-1])==diff)
            count++;
        else{
            diff=a[i]-a[i-1];
            count=1;
        }
    }
    cout<<count;
    return 0;
}