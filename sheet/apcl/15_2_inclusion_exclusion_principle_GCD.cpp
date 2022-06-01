#include <iostream>
using namespace std;
int divisible(int n,int a,int b){
    int c1=n/a;
    int c2=n/b;

    int c3=n/(a*b);
    return c1+c2-c3;
}

int gcd(int a,int b){
    int x;
    while(x>0){
        x=a%b;
        a=b;
        b=x;
    }
    cout<<a;
    return 0;

}
int main(){
    // cout<<divisible(40,5,7);
    gcd(42,24);
    return 0;
}