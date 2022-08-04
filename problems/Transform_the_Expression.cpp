#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int precedence(char c){
    if(c=='+' || c=='-') return 1;
    if(c=='*' || c=='/') return 4;
    if(c=='^') return 10;
    if((c=='(')) return 0;
}
int isChar(char c){
    if(c>='a' and c<='z'){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
	// your code goes here
	int cases ;
	cin>>cases;
	while(cases--){
	    string expression;
	    cin>>expression;
	    stack <char> stk;
	    for(int i=0;i<expression.length();i++){
            if(isChar(expression[i])){
	            cout<<expression[i];
	        }
	        else if(expression[i]=='(') stk.push(expression[i]);
	        else if(expression[i]==')'){
	            while(stk.top()!='('){
	                cout<<stk.top();
	                stk.pop();
	            }
	            stk.pop();
	        } 
            else if(precedence(expression[i]) > precedence(stk.top())){
                stk.push(expression[i]);
            }
            else if(precedence(expression[i]) < precedence(stk.top())){
                while(precedence(stk.top()) < precedence(expression[i])  || !stk.empty()){
                    cout<<stk.top();
                    stk.pop();
                }
                cout<<stk.top();
                stk.pop();
            }
	        
	        
	    }
	    while(!stk.empty()){
	        cout<<stk.top();               //    ((a+b)*(z+x))
	        stk.pop();                   //         abzx
	    }
	    cout<<"\n";
	}
	return 0;
}
// pyvq-xmo+-yhy+be**-n*/e--r/+t*hy^/ho+cglt*+--^uvkvf-+/y^^b-h+n+/u+lf--hq*fh*kfr+-^h++q*z/-gh+^v^f+m/q-b*s-z^h*-h*u/p+x+l+b*