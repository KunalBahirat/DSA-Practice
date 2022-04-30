#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        //Creating a constructor 
        //constructor is a special member function with the same name as that of class.
        //It is used to initialize the objects of its class 
        //It is automatically invoked whenever an object is created
        complex(); //constructor declaration.
        void getnumber(){
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex:: complex(){  // This is default constructor as it accepts no parameters.
    a=10;
    b=20;
    cout<<"Hello World \n";
}
int main(){
    complex c1;
    c1.getnumber();
    return 0;
}

//  Characteristics of the constructors :
/*  1. It should be declared in public section of the class.
    2. They are automatically invoked whenever object is created.
    3. They cannnot return values and Do not have return types.
    4. It can have default arguments.
    5. We cannot refer to their address.
*/