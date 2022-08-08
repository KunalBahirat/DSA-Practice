#include <bits/stdc++.h>
using namespace std;
// class templates with multiple parameters 
template <class T1=int,class T2=float>    // "COMMA SEPEARATED"
class myClass{ 
    T1 data1;
    T2 data2;
    public:
        myClass(T1 d1,T2 d2){
            data1=d1;
            data2=d2;
        }
        void display(){
            cout<<data1<<" "<<data2<<endl;
        }
};
int main(){
    myClass <int,char> m1(40,'m');
    m1.display();
    myClass <> m2(40,21.151);
    m2.display();
    return 0;
}