#include <iostream>
using namespace std;
bool equal_sum(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum%2!=0){
        return false;
    }
    sum/=2;
    bool t[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0) t[i][j]=false;
            if(j==0) t[i][j]=true;
        }
    }
    // wt[]=a[]   W=sum
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(a[i-1]<=j){
                t[i][j]= t[i-1][j-a[i-1]] || t[i-1][j];
            }
            else t[i][j]=t[i-1][j];
        }
    }
    return t[n][sum];
}
int main(){
    // int a[]={1,5,11,5};
    int a[]={1,6,4,4};
    if(equal_sum(a,4)) cout<<"Yes";
    else cout<<"NO";
    return 0;
}