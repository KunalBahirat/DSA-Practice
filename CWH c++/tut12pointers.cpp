#include <iostream>
using namespace std;
int main(){
    cout<<"& is use to create referenece variable"<<endl;
    float a=12.5;
    float &b=a; //b is a referenece variable
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<"\nThis is pointer\n";
    int x=3;
    int* y=&x;        // '*' is a ..dereferencing variable.. it is used to create pointer
    cout<<x<<endl;    // & is a ..address of variable..
    cout<<y<<endl;

    
    cout<<"\n//"<<endl;
    cout<<"The value of x is "<<*(y)<<endl;  //Here * is used as dereferencing variable
    

    return 0;
}