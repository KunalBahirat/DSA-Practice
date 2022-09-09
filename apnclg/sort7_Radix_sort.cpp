#include <bits/stdc++.h>
using namespace std;
int digits(int n){
    int ans=0;
    while(n){
        n=n/10;ans++;
    }
    return ans;
}
int main(){
    int n=10;
    int v[n]={237,146,259,348,152,163,235,48,36,62};
    vector<int> t{};
    vector<vector<int>> bin(10,t);
    int digit=digits(*max_element(v,v+n));
    int d=1;
    while(digit--){
        for(int i=0;i<n;i++){
            int ix=(v[i]/d)%10;
            bin[ix].push_back(v[i]);
        }
        int j=0;
        for(int i=0;i<10;i++){
            auto it2=bin[i].begin();
            while(j<n and it2!=bin[i].end()){
                v[j++]=*it2;
                it2++;
            }
        }
        d=d*10;
        bin.clear();
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}