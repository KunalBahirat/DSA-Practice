#include <iostream>
#include <bits/stdc++.h>

using namespace std;
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans(n,-1);
        stack <long long> st;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                st.push(arr[i]);
                continue;
            }
            while(!st.empty() and st.top()<=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            st.push(arr[i]);
        }
        return ans;
    }
int main(){
    int n;
    cin>>n;
    vector <long long> s;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        s.push_back(t);
    }
    vector<long long >ans=nextLargerElement(s,n);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}