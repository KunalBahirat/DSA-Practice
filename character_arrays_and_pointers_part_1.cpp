#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// void print(char *c){     or
void print(char c[]){
	int i=0;
	// while(c[i]!='\0'){
	// 	cout<<c[i];
	// 	i++;
	// }           or 
	while(*c!='\0'){
		cout<<*c;
		c++;
	}
	cout<<endl;
}
int main(){
	char x[]="hello"; // size =6 length=5     // No need to write \0
	cout<<"size = "<<sizeof(x)<<endl;		
	cout<<"length = "<<strlen(x)<<endl;		
	
	
	char a[]={'h','e','l','l','o','\0'};     // we have to write \0 explicitely
		
	char *ptr;
	ptr=a;
	ptr[0]='a';
	cout<<ptr<<endl;
	*(ptr+0)='h';            // a[0] and *(a+0) are same
	cout<<ptr;

	cout<<"\n\nPrint function called\n";
	print(ptr);
	return 0;
}
