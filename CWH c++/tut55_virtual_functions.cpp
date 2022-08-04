#include <bits/stdc++.h>
using namespace std;
class Base{
    public:
    int var_base=10;
   void display(){
        cout<<"Display var_base "<<var_base<<endl;
    }
};
class Derived : public Base{
    public:
        int var_derived=20;
         virtual void display(){
            cout<<"Display var_base "<<var_base<<endl;
            cout<<"Display var_derived "<<var_derived<<endl;
        }
};
int main(){
    Base *ptr_base;
    Base obj_base;
    Derived obj_derived;
    ptr_base=&obj_derived;
    ptr_base->display();
    return 0;
}