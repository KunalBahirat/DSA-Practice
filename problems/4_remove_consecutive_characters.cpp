#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            s.erase(i-1,1);
        }
    }
    cout<<s;
    return 0;
}