#include <iostream>
using namespace std;
class Solution
{
    public:

    int rec(int arr[],int n,vector<int> &t){
        if(n<=0) return 0;
        return max(arr[n-1]+rec(arr,n-2,t) ,rec(arr,n-1,t));
    }
    int memoization(int arr[],int n,vector<int> &t){
        if(n<=0) return 0;
        if(t[n-1]!=-1){
            return t[n-1];
        }
        t[n-1]=max(arr[n-1]+memoization(arr,n-2,t) ,memoization(arr,n-1,t));
        return t[n-1];
    }
    int tabl(int a[],int n){
        vector<int> t(n+1,0);
        t[0]=0;
        for(int i=1;i<=n;i++){
            if(i-2>=0)
            t[i]=max(a[i-1]+t[i-2],t[i-1]);
            else
            t[i]=max(a[i-1]+0,t[i-1]);
        }
        return t[n];
    }


    //Function to find the maximum money the thief can get.
    // optimised space complexity
    int FindMaxSum(int arr[], int n)
    {
        // Your code 
        int prev1=0;
        int prev2=0;
        for(int i=1;i<=n;i++){
            int ans=max(arr[i-1]+prev2 ,prev1);
            prev2=prev1;
            prev1=ans;
        }
        return prev1;
        
    }
};
int main(){
    int n = 6;
int a[] = {5,5,10,100,10,5};
// ans=110;
    return 0;
}