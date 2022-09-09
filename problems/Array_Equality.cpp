#include <map>
#include <cmath>
#include <iostream>
using namespace std;
void f(){
    double n;
    cin>>n;
    int a[int(n)];map <int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int ceilval=ceil(n/2);
    for(auto it:mp){
        if(it.second>ceilval){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        f();
    }
    // cout<<ceil(double(3.0/2.0));
    return 0;
}