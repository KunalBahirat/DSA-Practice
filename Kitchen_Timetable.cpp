#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cases;
	cin>>cases;
	while(cases--){
	    int num;
	    cin>>num;
	    int A[num+1],B[num];
	    A[0]=0;
	    for(int i=1;i<=num;i++) cin>>A[i];
	    for(int i=0;i<num;i++) cin>>B[i];
	    int ans=0;
	    for(int i=0;i<num;i++){
	        if(A[i+1]-A[i]>=B[i]) ans++;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
