#include <iostream>
using namespace std;
//int sum(int a, int b); --Acceptable
int sum(int  ,int );        //This declaration of function before main function is called as prototyping.
void greet();
int main(){
    int num1,num2; //Actual variable(Argument)
    cout<<"Enter first value= ";
    cin>>num1;
    cout<<"\nEnter second value= ";
    cin>>num2;
    cout<<"\nThe sum is= "<<sum(num1,num2);
    greet();
    return 0;
}
int sum(int a,int b){ // Temporary variable(Argument)
    int c=a+b;
    return c;
}
void greet(){
    cout<<"\nHello,This is kunal";
}