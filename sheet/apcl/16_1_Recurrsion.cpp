#include <iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum=sum(n-1);
    return n+prevSum;
}
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prev=power(n,p-1);
    return n*prev;
}
int factorial(int n){
    if(n<1){
        return 1;
    }
    return n*factorial(n-1);
}
int  fib(int n){
    if(n==0 | n==1){      //base condition
        return n;
    }
    return fib(n-2)+fib(n-1);
}
int main(){
    // cout<<sum(5);
    // cout<<power(5,4);
    // cout<<factorial(4);
    int n;
    cin>>n;
    cout<<fib(n);
    return 0; 
}