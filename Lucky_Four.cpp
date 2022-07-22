#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--){
	    int ans=0;
	    int x;
	    cin>>x;
	    string y=to_string(x);
	    for(int i=0;i<y.length();i++){
	        if(y[i]=='4'){
	            ans++;
	        }
	    }
	    cout<<ans<<"\n";
	}

	return 0;
}
