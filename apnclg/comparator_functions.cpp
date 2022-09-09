#include <bits/stdc++.h>
using namespace std;
bool should_i_swap(int a,int b){
    if(a < b) return true;
    else return false;
}

bool should_i_swap(pair <int,int> a,pair <int,int>b){
    if(a.second>b.second) return true;
    else return false;
}
int main(){
    int n;
    cin>>n; pair<int,int> a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(should_i_swap(a[i],a[j])){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    return 0;
}