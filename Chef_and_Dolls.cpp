#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cases;
    cin>>cases;
    while(cases--){
        int n;
        cin>>n;
        int num=0;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            num=num^v[i];
        }
        cout<<num<<endl;
        

    }
	
	return 0;
}
