#include <bits/stdc++.h>
using namespace std;
class Complex{
    int real;
    int im; 
    public:
        Complex(){
            real=im=0;
        }
        Complex(int r,int i){
            real=r;
            im=i;
        }
        void print(){
            cout<<real<<" + "<<im<<" i"<<endl;
        }

        //binary
        Complex operator +(Complex c){
            Complex temp;
            temp.real=real+c.real;
            temp.im=im+c.im;
            return temp;
        }

        void operator = (Complex c){
            real =c.real;
            im =c.im;
        }

        // unary
        Complex operator ++(){       // pre increment
            Complex t;
            t.real=++real;
            t.im=++im;
            return t;
        }
        void operator ++(int){       // post increment
            real++;
            im++;
        }

        void operator --(){       
            --real;
            --im;
        }

        
};
int main(){
    Complex a(5,2);
    a.print();
    Complex b(7,9);
    b.print();

    // Complex c=a+b;
    // c.print();

    // ++a;
    // a.print();
    // a++;
    // a.print();

    // --a;
    // a.print();




    // Complex x(10,12);
    // Complex y;

    // x.print();
    // y.print();
    // y=++x;
    // x.print();
    // y.print();

    return 0;
}