#include <iostream>
#include <stack>
using namespace std;
string reverse(string s){
    // Hey,how are you doing
    stack <string> stk;
    for(int i=0;i<s.length();i++){
        string k="";
        while(s[i]!=' ' && i<s.length()){
            k+=s[i];
            i++;
        }
        stk.push(k);
    }
    string ans="";
    while(!stk.empty()){
        ans+=stk.top()+" ";
        stk.pop();
    }
    return ans;
    
}
int main(){
    string s="Hey, how are you doing";
    string ans=reverse(s);
    cout<<ans;
    return 0;
}