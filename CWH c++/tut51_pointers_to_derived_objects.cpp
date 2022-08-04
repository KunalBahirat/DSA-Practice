#include <bits/stdc++.h>
using namespace std;
class Base{
    public:
    int var_base;
    void display(){
        cout<<"Display var_base "<<var_base<<endl;
    }
    
};
class Derived : public Base{
    public:
        int var_derived;
        void display(){
            cout<<"Display var_base "<<var_base<<endl;
            cout<<"Display var_derived "<<var_derived<<endl;
        }
};
int main(){
    Base *ptr;
    Derived obj_d;
    ptr=&obj_d;
    ptr->var_base=25;
    // ptr->var_derived=25;     // will throw an error bcoz we are accesing member variable of derived class.
    ptr->display();

    Derived *ptr_derived;
    Derived obj_derived;
    ptr_derived=&obj_derived;
    ptr_derived->var_base=9900;
    ptr_derived->var_derived=9999;
    ptr_derived->display();
    return 0;
}