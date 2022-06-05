/*
    When we are inheriting two classes from one base class. then the 'one variable' in base class will be inherited in that
    two classes seperately. and we are creating another child class from that two derived class ,then there will be ambiguity
    about that variable --> so we are using base class as a virtual base class.

                                 class A
             ---------------------- |  a-------------------
            '      -------------------------------       '
            '      |                             |       '
           a->  class B                         class C <-a
            '      |                             |       '
            '      ---------------|--------------        '
            '                  class D                   '
            ----------------->a       a <-------------------

        To provide this double inheritation of a and avoid creating ambiguity we use Virtual base class

    Syntax:  
            class B: virtual public A
            {

            };

            class C: virtual public A
            {
                
            };


*/

#include <iostream>
using namespace std; 
class A{
    public:
        int a=10;
};
class B: virtual public A{
    public:
        void print1(){
            cout<<a<<endl;
        }
};
class C:virtual public A{
    public:
        void print2(){
            cout<<a<<endl;
        }
};
class D: public B,public C{
    public:
        void print3(){
            cout<<a<<endl;     //Ambiguity created
        }
};


int main(){
    B b; C c;D d;
    b.print1();
    c.print2();
    d.print3();
    return 0;
}