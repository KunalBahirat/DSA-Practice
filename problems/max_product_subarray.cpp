#include <iostream>
#include <vector>
using namespace std;
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    if(n==0) return 0;
	    long long ans=arr[0];
	    long long ma=ans;
	    long long mi=ans;
	    for(int i=1;i<n;i++){
	        if(arr[i]<0){
	            swap(ma,mi);
	        }
	        long long x=arr[i];
	        ma=max(x,ma*x);
	        mi=min(x,mi*x);
	        ans=max(ma,ans);
	    }
	    return ans;
	}
int main(){
    vector<int> v={6, -3, -10, 0, 2};
    int n=5;
    cout<<maxProduct(v,n);
    return 0;
}