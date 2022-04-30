#include<iostream>
#include<cmath>
using namespace std;


// -----------------------------------Example 1 --------------------------------------------------
class complex{
    int a,b;
    public:
        complex(int ,int);
        void print_Number(){
            cout<<"Complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex::complex(int x,int y){   // This is parametrized constructor as it accepts 2 parameters.
    a=x;
    b=y;
}

int main(){
    int q,w;
    cout<<"Enter numbers ";
    cin>>q>>w;
    //Implicit call
    complex o(q,w);
    //Explicit call
    complex p=complex(q+1,w+2);
    o.print_Number();
    p.print_Number();
    
    return 0;
}



// -----------------------Example 2 ------------------------------------------


// class point{
//     int x,y;
//     public:
//         point(int a,int b){
//             x=a;
//             y=b;
//         }
//         void printpoint(void){
//             cout<<"The point is ("<<x<<","<<y<<")"<<endl;
//         }
// };
// int main(){
//     int p,q,r,s;
//     cout<<"Enter points ";
//     cin>>p>>q;
//     cout<<"Enter points ";
//     cin>>r>>s;
//     point a(p,q);
//     point b(r,s);
//     a.printpoint();
//     b.printpoint();


//     return 0;


// }

// --------------------Quiz-----------------------------

// class point{
//     int x,y;
//     public:
//         point(int a,int b){
//             x=a;
//             y=b;
//         }
//         void print(){
//             cout<<"The point is ("<<x<<","<<y<<")"<<endl;
//         }
//         friend void distance(point ,point);

// };
// void distance(point w1,point w2){
//     int aa=(w2.x-w1.x)*(w2.x-w1.x);
//     int bb=(w2.y-w1.y)*(w2.y-w1.y);
//     double cc=sqrt(aa+bb);
//     cout<<"Distance between point 1 & point 2 is ="<<cc<<endl;

// }


// int main(){
//     int p,q,r,s;
//     cout<<"Enter point 1=";
//     cin>>p>>q;
//     cout<<"Enter point 2=";
//     cin>>r>>s;
//     point o1(p,q);
//     point o2(r,s);
    
//     o1.print();
//     o2.print();
//     distance(o1,o2);


// }