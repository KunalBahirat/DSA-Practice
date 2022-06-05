#include <iostream>
using namespace std;
//---------------Inline function-----------------------


// int product(int a,int b){
/*
inline int product(int a,int b){   //inline function decreases compile time.    But inline function should be used only in small codes.
    return a*b;
}
int main(){
    int x=20,y=30;
    cout<<"The product of two numbers is "<<product(x,y)<<endl;
    cout<<"The product of two numbers is "<<product(x,y)<<endl;
    cout<<"The product of two numbers is "<<product(x,y)<<endl;
    cout<<"The product of two numbers is "<<product(x,y)<<endl;
    cout<<"The product of two numbers is "<<product(x,y)<<endl;
    
    return 0; 
}
*/

//-------------------static variable------------ //+-+-+-+-+ DO NOT USE STATIC VARIABLE IN INLINE FUNCTION +-+-+-+
/*
int product(int a,int b){
    static int c=0; //static variable means it execute only once.
    c=c+1;          //this will change the value of static variable in another calling of function.
    return a*b+c;
}
int main(){
    int x=20,y=30;
    cout<<"The product of two numbers is "<<product(x,y)<<endl;
    cout<<"The product of two numbers is "<<product(x,y)<<endl;
    cout<<"The product of two numbers is "<<product(x,y)<<endl;
    cout<<"The product of two numbers is "<<product(x,y)<<endl;
    return 0;
}
*/

//---------- Default arguments--------------------

float moneyrecieved(int money,float factor=1.04){   //Here factor is DEFAULT ARGUMENT. 
    return money*factor;
}
int main(){
    int money=100000;
    cout<<"If you have "<<money<<" in your bank account then you will get "<<moneyrecieved(money)<<" After 1 Year"<<endl;
    cout<<"\nFor VIP If you have "<<money<<" in your bank account then you will get "<<moneyrecieved(money,1.10)<<" After 1 Year"<<endl; 
    //When we give value in calling the default argument will be overwritten
    return 0;
}