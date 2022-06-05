#include <iostream>
using namespace std;
class Base{                                // Base class
    
    int Data1;  // Private by default & it is not inheritable.
    public:
        int Data2;
        void setdata(); 
        int getdata2();  // We can inherit private members of base class by using this type of functions.
        int getdata1();
};

void Base :: setdata(){
    Data1=10;
    Data2=20;
}

int Base :: getdata1(){
    return Data1;
}

int Base :: getdata2(){
    cout<<Data2<<endl;
    return Data2;
}

class Derived : private Base {     // Class is being Derived publically.
    int Data3;
    public:
        void process();
        void display();
};

void Derived :: process(){
    setdata();
    Data3 = Data2 * getdata1();
}

void Derived :: display(){
    cout<<"The value of data1 is "<<getdata1()<<endl;
    cout<<"The value of data2 is "<<Data2<<endl;
    cout<<"The value of data3 is "<<Data3<<endl;
    getdata2();
}

int main(){
    Derived der;
    //der.setdata();
    der.process();
    der.display();
    
    return 0;
}