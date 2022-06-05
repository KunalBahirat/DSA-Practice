#include<iostream>
using namespace std;
class Number{
    int a;
    public:
        Number(){                           //Default constructor
            a=20;
        }
        Number(int num){                    //Parametrized constructor
            a=num;
        }
        Number(Number &obj){                //Copy constructor 
            cout<<"Copy constructor called !!!"<<endl;
            a=obj.a;
        }

        // when no copy constructor found.compiler supplies its own copy constructor.

        void display(){
            cout<<"Your number is "<<a<<endl;
        };


};
int main(){
    Number k,l,m(45),n2(m);
    k.display();
    l.display();
    m.display();
    cout<<"*-*-*-*-*-"<<endl;
    // Number n=k; or 
    Number n(k);
    n.display();
    n2.display();
    



    return 0;

}