#include <iostream>
//-----------The variable declared first is executed first. --------------
using namespace std;

/*
Syntax for Intializaion list in constructor : 
 constructor(argument list) : initialization section {

     assignment + other code; 

}

*/

class Test {
    int a; int b;
    public:
        // Test(int i,int j): a(i),b(j)
        // Test(int i,int j): a(i),b(j+1)
        // Test(int i,int j): a(i),b(j*a)
        // Test(int i,int j):b(j), a(i+b)      //This will show error bcoz a is declared first.
        Test(int i,int j):b(j), a(i)
        {
            cout<<"Test Constructor called "<<endl;
            cout<<"The value of a is "<<a<<endl;        
            cout<<"The value of b is "<<b<<endl;        
        }
};
int main(){
    Test alian(3,4);
    return 0;
}