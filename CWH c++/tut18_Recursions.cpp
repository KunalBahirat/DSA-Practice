#include <iostream>
using namespace std;

int factorial(int n){ 
    if (n<=0){
        return 1;
    }
    return n * factorial(n-1);   //Recursions means a fucntion calls itself many times.
    }
int main(){
    int a;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}


//Fibonacci series------------
// int fib(int n){
//     if (n<2){
//         return 1;
//     }
//     return fib(n-2)+fib(n-1);
// }
// int main(){
//     int a;
//     cout<<"enter a number ";
//     cin>>a;
//     cout<<"The term in fibonacci series at position "<<a<<" is "<<fib(a)<<endl;
//     return 0;
//     // But the recursions is not useful everytime bcoz it calls function lots of time.

// }

