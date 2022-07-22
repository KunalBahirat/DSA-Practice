#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int stock_prices[n];
    // for(int i=0;i<n;i++){
    //     cin>>stock_prices[i];
    // }

    //-------------------------brute force -------------------
    // int output[n];
    // for(int i=n-1;i>=0;i--){
    //     int count=0;
    //     for(int j=i;j>=0;j--){
    //         if(stock_prices[j]>stock_prices[i]){
    //             break;
    //         }
    //         else if(stock_prices[j]<=stock_prices[i]) count++;
    //     }
    //     output[i]=count;

        
    // }
    // for(int i=0;i<n;i++){
    //     cout<<output[i]<<" ";
    // }


    // ------------------------optimised ----------------------------
    int n;
    cin>>n;
    int stock_prices[n];
    for(int i=0;i<n;i++){
        cin>>stock_prices[i];
    }
    vector <int> output;
    stack <pair <int,int>> stk;
    for(int i=0;i<n;i++){
        int count=1;
        while(!stk.empty() and stk.top().first < stock_prices[i]){
            count+=stk.top().second;
            stk.pop();
        }
        stk.push({stock_prices[i],count});
        output.push_back(count);
    }
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }

    return 0;
}