#include <iostream>
using namespace std;

int main() {
	// your code goes here
	double A,B;
	cin>>A>>B;
	char c;
	cin>>c;
	int CAL;
	if(c=='+'){
	   // CAL = A + B;
	    cout<<A + B<<endl;
	}
	else if(c=='-'){
	   // CAL = A - B;
	    cout<<A - B<<endl;
	}
	else if(c=='*'){
	   // CAL = A * B;
	    cout<<A * B<<endl;
	}
	else if(c=='/'){
	    cout<<fixed<<A / B<<endl;
	}
	return 0;
}