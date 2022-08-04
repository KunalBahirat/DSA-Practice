#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include "math.h"
#define x pow(2,31)
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,S,P,Q;
    cin>>N>>S>>P>>Q;
    set <int> v(N);
    v.insert(S% x);
    for(int i=1;i<=N-1;i++){
        v[i]=v[i-1]*P + Q % x;
    }
    
    
    
     
    return 0;
}
