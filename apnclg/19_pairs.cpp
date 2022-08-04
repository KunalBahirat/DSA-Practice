#include <iostream>
#include <vector>
#include "bits/stdc++.h"
using namespace std;
// 4  7  2  6 1 0 5  3
// 10 16 7 14 5 3 12 9

bool myCompare(pair <int,int>p1,pair<int,int> p2){
    return p1.first<p2.first;
}
int main(){
    int arr[8]={10,16,7,14,5,3,12,9};
    vector < pair <int ,int>> v;
    for(int i=0;i<8;i++){
        // pair<int,int> p;
        // p.first=arr[i];
        // p.second=i;
        // v.push_back(make_pair(p.first,p.second));
         
        // or
        v.push_back(make_pair(arr[i],i));

    }
//    for(auto element : v){
//        cout<<element.first<<" "<<element.second<<endl;
//    }
   sort(v.begin(),v.end(),myCompare);
   
   //after sorting
   for(auto element : v){
       cout<<element.first<<" "<<element.second<<endl;
   }

   for(int i=0;i<v.size();i++){
       arr[v[i].second]=i;
   }
   for(int i=0;i<8;i++){
       cout<<arr[i]<<' ';
   }
    return 0;
}