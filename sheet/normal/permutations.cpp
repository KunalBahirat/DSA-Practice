#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// A string of length n has n! permuataions

void permutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }
}
int main(){
    string s="ABC";
    permutation(s,"");

    return 0;
}