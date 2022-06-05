#include <iostream>
using namespace std;
/*
        case 1:
        class B :public A{
            // Order of execution of constructor A() then B()
        };

        case 2:
        class A:public B,public C{
            // Order of Execution of constructor B() then C() then A()
        };

        case 3:
        class A: public B ,virtual public C{
            // Order of Execution of constructor C() then B() then A()
        };

*/
class Base1{
    int data1;
    public:
        Base1(int i){
            data1=i;
            cout<<"Base 1 Constructor called "<<endl;
        }
        void printData1(void){
            cout<<"The value of Data1 is "<<data1<<endl;
        }

};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2=i;
            cout<<"Base 2 Constructor called "<<endl;
        }
        void printData2(void){
            cout<<"The value of Data2 is "<<data2<<endl;
        }

};
class Derived : public Base1 ,virtual public Base2{
    int data3,data4;
    public:
        Derived(int a,int b,int c,int d): Base1(a), Base2(b)
        {
            data3 = c;
            data4 = d;
            cout<<"Derived Constructor called"<<endl;
        }
        void printDerived(void){
            cout<<"The value of Data3 is "<<data3<<endl;
            cout<<"The value of Data4 is "<<data4<<endl;
        }
        
};

int main(){
    Derived alian (1,2,3,4);
    alian.printData1();
    alian.printData2();
    alian.printDerived();
    return 0;
}