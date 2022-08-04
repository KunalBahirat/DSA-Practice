#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main(){
    // int a[6]={5,10,15,5,4,5};
    // unordered_set <int> set;
    // for(int element:a){
    //     set.insert(element);
    // }
    // cout<<set.size();

    int n=5,m=3;
    int a[n]={1,2,3,4,5};
    int b[m]={1,2,3};
    Set<Integer> set=new Hashset<>();
    for(int x:a){
        set.add(x);
    }
    for(int x:b){
        set.add(x);
    }
    cout<<set.size();
    return 0;
}