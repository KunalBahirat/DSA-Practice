#include <bits/stdc++.h>
using namespace std;
// 12! =1*2*3*4*5*6*7*8*9*10*11*12
//              1         2
// 479001600  <-- 2 zeroes
long fact(int n){
    long ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int trailing_zeroes(int num){
    int ans=0;
    for(int i=5;i<=num;i*=5){
        ans = ans= num/i;
    }
    return ans;
}
int main(){
    long ans=fact(12);
    cout<<ans<<endl;
    cout<<trailing_zeroes(12)<<endl;    

    long ans2=fact(25);
    cout<<ans2<<endl;
    cout<<trailing_zeroes(25);    
    
    return 0;
}