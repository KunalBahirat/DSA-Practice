#include <iostream>
#include <algorithm>
using namespace std;
int t[100][100];
int LCS(string s1,string s2,int n,int m){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 | j==0 ) t[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                t[i][j]=t[i-1][j-1]+1;
            }
            else t[i][j]=max(t[i-1][j], t[i][j-1]);
        }
    }
    return t[n][m];
}
void print_scs(string s1,string s2){
    LCS(s1,s2,s1.size(),s2.size());
    int i=s1.size(),j=s2.size();
    string ans="";
    while(i>0 and j>0){
        if(s1[i-1]==s2[j-1]){
            ans+=s1[i-1];
            i--;j--;
        }
        else{
            if(t[i-1][j]>t[i][j-1]){
                ans+=s1[i-1];
                i--;
            }
            else if(t[i][j-1]>t[i-1][j]) {
                ans+=s2[j-1]; 
                j--;
            }
        }
    }
    while(i>0){
        ans+=s1[i-1];
        i--;
    }
    while(j>0){
        ans+=s2[j-1];
        j--;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}
int main(){
    print_scs("acbcf","abcdaf");   
    return 0;
}