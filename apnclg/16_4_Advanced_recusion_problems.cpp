#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void permutation(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.length();i++){
        char c=str[i];
        string restOfString=str.substr(0,i)+str.substr(i+1);
        permutation(restOfString,ans+c);
    }
}

    //Finding No of Possible paths from start point to endpoint in boardgame
    //   0 1 2 3  => 4
int countPath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=countPath(s+i,e);
    }
    return count;
}

    //Counting the number of paths possible in the maze
int countPathMaze(int n,int i,int j){
    if(i==n-1 || j==n-1 ){
        return 1;
    }
    if(i>=n ||j>=n){
        return 0;
    }
    return countPathMaze(n,i+1,j) + countPathMaze(n,i,j+1);
}

int main(){
    //printing all permutations of string
    // permutation("ABC","");
    string s="abc";

    // transform(s.begin(),s.end(),s.begin(),::toupper);
    // cout<<s;

    // cout<<countPath(0,3);

    cout<<countPathMaze(3,0,0);

    return 0;
}