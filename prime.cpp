#include <iostream>
using namespace std;
int isprime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
            break; 
        }
    }
    if(i==n){

    return 1;
    }
}
int main(){
    int a;
    cin>>a;
    int ans=isprime(a);
    cout<<ans;
    return 0;
}