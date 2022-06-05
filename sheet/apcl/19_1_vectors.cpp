#include <iostream>
#include "bits/stdc++.h"
#include <vector>
using namespace std;

int main(){
    vector <int> v1;            //declaring
    v1.push_back(3);            //adding elements
    v1.push_back(1);
    v1.push_back(2);

    for(int i=0;i<v1.size();i++){  //traversing
        cout<<v1[i]<<" ";
    }   
    cout<<endl;

    sort(v1.begin(),v1.end());          //soring
    vector<int> ::iterator it;                  //traversing using iterator
    for(it=v1.begin();it!=v1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    v1.pop_back();                    //removing element   
    for(auto element:v1){                   //traversing using element 
        cout<<element<<" ";
    }


    vector <int> v2 (3,50);           //declaring another

    cout<<endl;
    for(auto element:v2){
        cout<<element<<" ";
    }

    swap(v1,v2);                                    //swaping
    vector<int> ::iterator it1;
    cout<<"\nv1\n";
    for(it1=v1.begin();it1!=v1.end();it1++){
        cout<<*it1<<" ";
    }
    vector<int> ::iterator it2;
    
    cout<<"\nv2\n";
    for(it2=v2.begin();it2!=v2.end();it2++){
        cout<<*it2<<" ";
    }
    return 0;
}