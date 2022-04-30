#include <iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"How are you ?"<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"Kaise ho ?"<<endl;
        }
};
class Derived : public Base1,public Base2{
    int a;
    public:
    void greet(){
        Base1 :: greet();
    }
};

//Amb 2
class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};
class D: public B{
    //D's new say() method will override base class's say() method.
    public:
        void say(){
            cout<<"Hello beutiful peoples"<<endl;
        }
};
int main(){
    // Ambiguity 1
    // Derived d;
    // Base1 b1;
    // Base2 b2;
    // b1.greet();
    // b2.greet();
    // d.greet();

    // Ambiguity 2

    B b;
    D d;
    b.say();
    d.say();

    return 0;
}