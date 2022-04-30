#include <iostream>
using namespace std;

class Employee{                                                         // Base class
public:
    int id;
    float salary;
    Employee(){}                // We have to compulsary create Default constructor.
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.00;
    }
};
/*
-----------------Derived Class syntax--------------------

class {{Derived-class-name}} : {{visibility-mode}} {{Base-class-name}}  
{
    class members/methods/etc...
}

----------------------------------------------------------
Note:
    1.Default visibility mode is private.
    2.public Visibility mode : Public members of the base class becomes public members of the derived class.
    2.Private Visibility mode : Pubic members of the base class becomes private members of the derived class.
    4.Private members are never inherited.
*/


// Creating a programmer class derived from Employee base class.

class Programmer :  public Employee{                                 // Derived class
public:
    Programmer (int inpid){
        id=inpid;
    }
    int languagecode = 9;
    void getData(){
        cout<<"Id is="<<id<<endl;
    }
};
int main()
{
    Employee a(1), b(2);
    cout << a.salary << endl;
    cout << b.salary << endl;
    Programmer c(10);
    cout<<c.languagecode<<endl;
    cout<<c.id<<endl;
    c.getData();
    return 0;
}