//ways to declare  strings
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    // string str="Kunal";
    // //
    // string str1(5,'n');
    // cout<<str1;

    // string str2;
    // getline(cin,str2);
    // cout<<str2;

    //****************op on strings ************************
    // string s1="fam";
    // string s2="ily";
    // s1.append(s2);
    //or
    // s1=s1+s2;


    // cout<<s1;
    //accesing any character
    // cout<<endl<<s1[1];

    // s1.clear();           //cleans string
    // cout<<s1;


    // string a="abc"; 
    // string b="xyz";
    // cout<<b.compare(a)<<endl;   //comparing 2 string if they  are equal

    // string c="abc"; 
    // string d="abc";
    // if(c.compare(d)==0)
    //     cout<<"String are equal"<<endl;
    // if(!c.compare(d))
    //     cout<<"String are equal"<<endl;


    // string x="kunal";
    // cout<<x<<endl;
    // x.clear();
    // if(x.empty())       //checks if the string is empty
    //     cout<<"String is empty"<<endl;

    // x="kunal";
    // if(!x.empty())
    //     cout<<"string is not empty"<<endl;

    //erase function : instead using shift after deleting one char of string we can use erase
    string q="nincompoop";
    // q.erase(2,3);
    // cout<<q<<endl;

    //find function
    // cout<<q.find("poo")<<endl;
    
    // insert function
    // q.insert(2,"lol");
    // cout<<q<<endl;

    //length / size function
    // cout<<q.size()<<endl;
    // cout<<q.length()<<endl;
 
    //iterating over string

    // for(int i=0;i<q.length();i++){
    //     cout<<q[i]<<endl;
    // }

    // finding substring
    string w=q.substr(3,4);
    cout<<w<<endl;

    // stoi function : to convert any string to int
    // string e="786";
    // int r=stoi(e);
    // cout<<r+2<<endl;


    // converting int to string : to_string function
    // int t=786;
    // string y=to_string(t);
    // cout<<y+"2"<<endl;

    //sorting string we have to include algorith header file
    string u="nfjebjefbsxxs";
    sort(u.begin(),u.end());
    cout<<u;


        


}