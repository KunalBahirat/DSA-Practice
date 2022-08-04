#include <iostream>
#include "bits/stdc++.h"
// #include <boost/multiprecision/cpp_int.hpp>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision;
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int fact=1;
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<<fact<<endl;
    }
    return 0;
}