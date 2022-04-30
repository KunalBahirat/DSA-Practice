#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;

}
int fib(int num){
    int t1=0;
    int t2=1;
    for(int i=0;i<num;i++){
        cout<<t1<<" ";
        int nextterm=t1+t2;
        t1=t2;
        t2=nextterm;

    }
} 
int nCr(int n,int r){
    int final=fact(n)/(fact(r) * fact(n-r));
    return final;
}
void pascalTraingle(int x){
    for(int n=0;n<x;n++){
        for(int r=0;r<=n;r++){
            cout<<nCr(n,r)<<" ";
        }
        cout<<endl;
        
    }
}
int main(){
    // int a,b;
    // cin>>a>>b;
    // for (int i =a; i<b; i++)
    // {
    // if(isprime(i)){
    //     cout<<i<<" ";
    // }
    //     
    // }

    // int num;
    // cin>>num;
    // // fib(num);
    // cout<<fact(num);

    //  nCr= n! / r! * (n-r)!
    // int n,r,final;
    // cin>>n>>r;
    // final=fact(n)/(fact(r) * fact(n-r));
    // cout<<"nCr = "<<final;

    int n;
    cin>>n;
    pascalTraingle(n);

    return 0;
}