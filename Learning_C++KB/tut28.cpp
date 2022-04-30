#include <iostream>
using namespace std;
/*
class y;
class x{
    int data;
    friend void sum(x,y);
    public:
        void setvalue(int value){
            data=value;
        }
        void getvalue(){
            cout<<data<<endl;
        }
};
class y{
    int data1;
    friend void sum(x,y);
    public:
        void setvalue1(int value){
            data1=value;
        }
         void getvalue1(){
            cout<<data1<<endl;
        }
};
void sum(x m1,y m2){
    cout<<"The sum of the number is "<<m1.data+m2.data1<<endl;

}
int main(){
    x o1;
    y o2;
    int a,b;
    cout<<"enter A ";
    cin>>a;
    cout<<"enter B ";
    cin>>b;


    o1.setvalue(a);
    o1.getvalue();
    
    o2.setvalue1(b);
    o2.getvalue1();
    sum(o1,o2);

    return 0;
}
*/
class p;
class o{
    int object1;
    friend void swapobject(o &,p &);
    public:
        void setobject1(int l1){
            object1=l1;
        }
        void display(){
            cout<<object1<<endl;
        }
};
class p{
    int object2;
    friend void swapobject(o &,p &);
    public:
        void setobject2(int l2){
            object2=l2;
        }
         void display(){
            cout<<object2<<endl;
        }
};
void swapobject(o &a,p &b){
    int temp=a.object1;
    a.object1=b.object2;
    b.object2= temp;
}
int main(){
    int q1,q2;
    cin>>q1>>q2;
    o w1;p w2;
    w1.setobject1(q1);
    w2.setobject2(q2);
    swapobject(w1,w2);
    cout<<"The swapped data is ";
    w1.display();
    w2.display();
    return 0;

}