#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int cases;
	cin>>cases;
	while(cases--){
	    int T1,T2,R1,R2;
	    cin>>T1>>T2>>R1>>R2;
	    if(pow(T1,2)/pow(R1,3) !=pow(T2,2)/pow(R2,3) ){
            // cout<<""
	        cout<<"NO"<<"\n";
        }
        else cout<<"YES"<<"\n";
	}
	return 0;
}
