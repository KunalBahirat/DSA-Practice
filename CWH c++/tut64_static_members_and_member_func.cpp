#include <bits/stdc++.h>
using namespace std;
class A{
    public:
        static int num;
        A(){
            num++;
        }
        static int getStatic(){
            return num;
        }

};
int A::num=10;
int main(){
    cout<<A::num<<endl;
    A obj;
    cout<<A::num<<endl;
    A obj2;
    cout<<A::num<<endl;
    cout<<obj2.num<<endl;

    cout<<endl<<"Static member function "<<endl;
    cout<<A::getStatic();
    return 0;
}