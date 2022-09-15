#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> subset_sum(int a[],int range,int n){
    vector<vector<bool>> t (n+1,vector<bool> (range+1));
    for(int i=0;i<=n;i++){
      for(int j=0;j<=range;j++){
           if(i==0) t[i][j]=false;
           if(j==0) t[i][j]=true;
      }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=range;j++){
            if(a[i-1]<=j)
                t[i][j]= t[i-1][j-a[i-1]] || t[i-1][j];
            else t[i][j]=t[i-1][j];
        }

    }

    vector<int> v;
    for(int i=0;i<=range/2;i++){
        if(t[n][i])
            v.push_back(i);
    }
    return v;
}
int min_ssum(int a[],int n){
    int range=0;
    for(int i=0;i<n;i++){
        range+=a[i];
    }
    vector<int> s1=subset_sum(a,range,n);
    int mn=INT_MAX;
    for(auto it:s1){
        mn=min(mn,range-2*(it));
    }
    return mn;

}
int main(){
    // int a[]={1,6,11,5};
    int a[]={3,9,7,3};
    // int a[]={-36,36};
    cout<<min_ssum(a,4);
    // cout<<min_ssum(a,2);
    return 0;
}