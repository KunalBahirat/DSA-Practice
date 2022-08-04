#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=n-i;j>0;j--){
            cout<<" ";
            count++;
        }
        for(int j=1;j<=i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}