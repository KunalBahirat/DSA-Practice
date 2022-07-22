#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> x;
    
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    
    vector<int> b;
    b.push_back(10);
    b.push_back(20);
    b.push_back(30);
    b.push_back(40);
    b.push_back(50);

    x.push_back(a);
    x.push_back(b);

    for(int i=0;i<x.size();i++){
        for(int j=0;j<x.front().size();j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}