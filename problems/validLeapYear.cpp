#include <string>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int year;
		cin>>year;
		string y=to_string(year);
		bool validYear=false;
		int j;
		for(j=0;j<4;j++){
			if(!(y[j]>='0' and y[j]<='9')){
				validYear=false;
				break;
			}
			else {validYear=true;}
		}
		if(y.length()!=4) validYear=false;
		if(validYear==false){
			cout<<"INVALID YEAR"<<endl;
		}
		else if(validYear==true){
			if(year%400==0){
				cout<<"LEAP YEAR"<<endl;
			}
			else if(year%100==0){
				cout<<"NOT LEAP YEAR"<<endl;
			}
			else if(year%4==0){
				cout<<"LEAP YEAR"<<endl;
			}
			else{
				cout<<"NOT LEAP YEAR"<<endl;
			}
		}
		
	}
	return 0;
}