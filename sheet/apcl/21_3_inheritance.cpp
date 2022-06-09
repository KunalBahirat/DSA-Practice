#include <iostream>
using namespace std;


/*
    For a Protected member:
                            Public derivation   Private derivation     Protected derivation 
    1. Private members        Not inherited       Not inherited           Not inherited
    2. Protected members      Protected            Private                 Protected
    3. Public members          public              Private                 Protected

*/


// Single Inheritance
// class A{
//     public:
//         void fun1(){
//             cout<<"Inherited"<<endl;
//         }
// };
// class B : public A{
//     public:
// };


// Multiple Inheritance
// class A{
//     public:
//         void fun1(){
//             cout<<"Fun1"<<endl;
//         }
// };
// class B{
//     public:
//         void fun2(){
//             cout<<"Fun2"<<endl;
//         }
// };
// class C :public A,public B{
//     public:
// };


//Multi level Inheritance
class A{
    public :
        void fun1(){
            cout<<"Fun1"<<endl;
        }
};
class B : public A{
    public :
        void fun2(){
            cout<<"Fun2"<<endl;
        }
};
class C : public B{
    public :
       
};


int main(){
    // B b;
    // b.fun1();

    // C c;
    // c.fun1();
    // c.fun2();

    // C c;
    // c.fun2();
    // c.fun1();


    return 0;
}