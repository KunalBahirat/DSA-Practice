#include <iostream>
using namespace std;
int swap(int a,int b ){ // This function will not swap the numbers.
    int temp=a;
    a=b;
    b=temp;
    
}
// ----------Call by reference using pointers--------
int swapPointer(int* a,int* b ){ // the dereferencing variable (*) will use the value at address and will swap it.
    int temp=*a;
    *a=*b;
    *b=temp;
}
// ----------Call by reference using c++ referenece variable (&) --------
int swapRefereneceVar(int &a,int &b ){  //the referenece variable (&) will make value x=a,y=b and function will swap it.
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=4,y=5;
    //cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x,y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x,&y);  //we given address (&) of x,y to the swapPointer function. (&) is a referenece variable
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swapRefereneceVar(x,y);
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}