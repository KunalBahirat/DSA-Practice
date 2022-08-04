#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

string reverseStr(string str,int i){
    if(i==str.length()) return "";
    reverseStr(str,i+1);
    cout<<str[i];
}


void replacePi(string str){
    if(str.length()==0) return;

    if(str[0]=='p' & str[1]=='i'){
        cout<<"3.14";
        replacePi(str.substr(2));
    }
    else{
        cout<<str[0];
        replacePi(str.substr(1));
    }
}

void tower_of_hanoi(int n,string a,string b,string c){       // src  helper  destn
    if(n==1){
        cout<<"Move "<<n<<"st disk from "<<a<<" to "<<c<<endl;
        return;
    }
    tower_of_hanoi(n-1,a,c,b);
    cout<<"Move "<<n<<"th disk from "<<a<<" to "<<c<<endl;
    tower_of_hanoi(n-1,b,a,c);
}

string rmDuplicate(string str){
    if(str.length()==0){
        return "";
    }
    char ch=str[0];
    string output=rmDuplicate(str.substr(1));
    if(ch==output[0]){
        return output;
    }
    else{
        return ch+output;
    }
}

string move_all_x(string s){

    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=move_all_x(s.substr(1));
    
    if(ch=='x')
        return ans+ch;
    else    
        return ch+ans;
}

void print_substrings(string input , string output){
    
    if(input.length() == 0) {
        cout<<output<<endl;
        return;
    }

    print_substrings( input.substr(1) , output );

    print_substrings( input.substr(1) , output+ input[0]);

}

void print_substring_with_ASCII(string input,string output){
    
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }

    int ascii = input [0];
    print_substring_with_ASCII(input.substr(1) , output);

    print_substring_with_ASCII(input.substr(1) , output + input [0]);

    print_substring_with_ASCII( input.substr(1) , output + to_string(ascii));
}
int main(){
    // string str;cin>>str;
    // reverseStr(str,0);
    
    // string str="pidhbepidnje";

    // replacePi(str);
    // string src="A",destn="C",helper="B";
    // tower_of_hanoi(4,src,helper,destn);


    // string k="aaabbbbbeeed";
    // cout<<rmDuplicate(k)<<endl;

    // string l="axxbdxcefxhix";
    // cout<<move_all_x(l)<<endl;

    // print_substrings("ABC" , "");

    print_substring_with_ASCII("AB" , "");




    



    return 0;
}