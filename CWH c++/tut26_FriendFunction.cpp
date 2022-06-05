#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
        friend complex sumcomplex(complex m1,complex m2);   //Friend function = it gives access of private data in that function.
        void setdata(int v1,int v2){
            a=v1;
            b=v2;
        }
        void getdata(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex sumcomplex(complex m1,complex m2){
    complex m3;
    m3.setdata((m1.a +m2.a),(m1.b + m2.b));  //private function accessed by using friend function.
    return m3;
}
int main(){
    complex sum;
    complex c1,c2;
    c1.setdata(2,3);
    c1.getdata();
    c2.setdata(4,5);
    // c1.getdata();
    c2.getdata();
    sum=sumcomplex(c1,c2);
    sum.getdata();
    return 0;
}

/* properties of friend function 
1. It is not in the scope of class.
2. hence it cannot be called from the object of class. c1.sumcomplex() == invalid
3. can be invoked without the help of any object 
4. usually contains the objects as arguments.
5. can be declared inside public or private section of the class.
6. it cannot access the members directly by their names and need object_name.member_name to access any member. 






*/