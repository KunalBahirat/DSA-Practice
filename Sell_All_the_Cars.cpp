#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int n;
	    cin>>n;
	    vector <int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end(), greater<int>());
	    int profit=0;
	    for(int i=0;i<n;i++){
	        profit+=max(0,v[i]-i);
	        profit %= 1000000007;
	    }
        cout<<profit<<endl;
	}
	return 0;
}
