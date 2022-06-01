#include <iostream>
using namespace std;
//Tiling Problem 
int tilingWays(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return tilingWays(n-1) + tilingWays(n-2);
}
// Friends pairing problem 
// Find No of ways in which n friends can be paired up or remain single

int friendsPairing(int n){
    
    if(n==0 || n==1 || n==2)
        return n;
    
    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
}
int main(){
    // cout<<tilingWays(4);
    cout<<friendsPairing(4);
    return 0;
}