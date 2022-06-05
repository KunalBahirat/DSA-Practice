#include <iostream>
using namespace std;
// forward declaration
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);
};
class complex
{

    int a, b;
    //Declaring one function of class calculator as a friend function
    friend int calculator ::sumRealComplex(complex, complex);
    //declaring entire class as a friend function
    friend class calculator;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getdata()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumRealComplex(complex m1, complex m2)
{
    int m;
    m=(m1.a + m2.a);
    int n;
    n=(m1.b +m2.b);
    // return m;
    // return n;
    return m+n;
    
}

int main(){
    complex k1,k2; 
    k1.setdata(15,16);
    k2.setdata(1,2);
    k1.getdata();
    k2.getdata();
    calculator calc ;
    int sec=calc.sumRealComplex(k1,k2);
    cout<<"The output of function sumRealComplex is "<<sec<<endl;
    return 0;
}