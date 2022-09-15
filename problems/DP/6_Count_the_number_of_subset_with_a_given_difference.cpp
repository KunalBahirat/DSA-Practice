#include <iostream>
#include <vector>
using namespace std;
int count_ss_sum(int a[],int n,int sum){
    vector<vector<int>> t(n+1 , vector<int> (sum+1));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0) t[i][j]=0;
            if(j==0) t[i][j]=1;
        }
    }
    // wt[] =a[] W=sum
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(a[i-1]<=j){
                t[i][j]=t[i-1][j-a[i-1]] + t[i-1][j];
            }
            else t[i][j]=t[i-1][j];
        }
    }
    return t[n][sum];
}
int count_ssd(int a[],int n,int diff){
    // sum(s1) - sum(s2) = diff 
    // sum(s1) + sum(s2) = sum(a)
    // --------------------------
    // 2 sum(s1) = diff + sum(a)
    //  sum(s1) = (diff + sum(a)) /2
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int sum_s1=(diff+sum)/2;
    return count_ss_sum(a,n,sum_s1);

}
int main(){
    // int a[]={1,1,2,3};
    // int a[]={5, 2, 6, 4};
    int a[]={1, 2, 3, 1, 2};
    // cout<<count_ssd(a,4,1);
    // cout<<count_ssd(a,4,3);
    cout<<count_ssd(a,5,1);
    return 0;
}