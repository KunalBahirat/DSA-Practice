#include "bits/stdc++.h"
#include <iostream>
using namespace std;

//Function Overloading
class sample{
    public:
        void fun(){
            cout<<"This is function with no argument"<<endl;
        }
        void fun(int a){
            cout<<"This is function with int argument"<<endl;
        }
        void fun(double a){
            cout<<"This is function with double argument"<<endl;
        }
};

// Operator Overloading
class Complex{
    int real,img;
    public:
        Complex(int r=0,int i=0){
            real=r;
            img=i;
        }
        Complex operator + (Complex const &obj){
            Complex res;
            res.img=img+obj.img;
            res.real=real+obj.real;
            return res;
        }
        void display(){
            cout<<real<<" +i"<<img<<endl;
        }
};


//Function Overriding 
class base{
    public:
        virtual void print(){
            cout<<"Print fun base class"<<endl;
        }
        void display(){
            cout<<"Display fun base class"<<endl;
        }
};
class derived : public base{
    public:
        void print(){
            cout<<"Print fun derived class"<<endl;
        }
        void display(){
            cout<<"Display fun derived class"<<endl;
        }
};

int main(){
    // sample s1;
    // s1.fun();
    // s1.fun(2);
    // s1.fun(2.4);
    
    // Complex c1(2,5);
    // Complex c2(4,7);
    // Complex c3=c1+c2;
    // c3.display();

    base *baseptr;
    derived d;
    baseptr=&d;

    baseptr->print();

    d.print();

    return 0;
}