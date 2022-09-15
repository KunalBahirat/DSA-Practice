#include <iostream>
using namespace std;
    bool check(string s){
        for(int i=0,j=s.size()-1;i<=j;i++,j--){
            if(s[i]!=s[j]) return false;
        }
        return true;
    }
    string longestPalin (string S) {
        // code here
        if(S.size()==1) return S;
        int max_size=0;
        string lp;
        string st="";
        for(int i=0;i<S.size()-1;i++){
            for(int j=i;j<S.size();j++){
                st+=S[j];
                if(check(st) and st.size()>max_size){
                    max_size=st.size();
                    lp=st;
                }
            }
            st="";
        }
        if(lp.size()==1) {
            lp="";
            lp+=S[0];
            return lp;}
        return lp;
    }
int main(){
    string s="aaaabbaa";
    cout<<longestPalin(s);
    return 0;
}