#include <bits/stdc++.h>
using namespace std;
// using multiset
int fun(int a[],int n){
    multiset <int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);     // nlogn
    }
    int ans=0;
    while(s.size()!=1){
        int sum=0;
        auto it=s.begin();      
        sum+=*it;
        s.erase(it++);      // 1
        sum+=*it;
        ans+=sum;
        s.erase(it);       // 1
        s.insert(sum);     // logn
    }    // nlogn
    return ans;
}
// using priority queue
int fun2(int a[],int n){
    priority_queue <int ,vector<int> ,greater<int>> p;
    for(int i=0;i<n;i++){
        p.push(a[i]);
    }
    int ans=0;
    while(p.size()>1){
        int sum=0;
        int first=p.top(); p.pop();
        int second=p.top(); p.pop();
        sum+=first+second;
        p.push(sum);
        ans+=sum;
    }
    return ans;
}
int main(){
    // int a[4]={6,5,2,3};
    // cout<<fun(a,4);
    // int a[5]={20,30,10,5,30};
    // cout<<fun(a,5);
    int a[4]={6,5,2,3};
    cout<<fun2(a,4);
    // int a[5]={20,30,10,5,30};
    // cout<<fun2(a,5);
    return 0;
}