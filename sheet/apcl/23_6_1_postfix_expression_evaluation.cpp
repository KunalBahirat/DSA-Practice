#include <iostream>
using namespace std;
#include <stack>
#include <math.h>
int postfixEval(string s){
    stack <int> st;
    for(int i=0;i<s.length();i++){
        if('0'<=s[i] && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            // operand at top will be op2
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }
    }
    return st.top();
}

int main()
{

    string postfix="46+2/5*7+";
    cout<<postfixEval(postfix);
    return 0;
}