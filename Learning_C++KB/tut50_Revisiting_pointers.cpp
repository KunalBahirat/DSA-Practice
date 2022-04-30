#include <iostream>
using namespace std;
int main(){
    // Basic Example 
    int a=4;
    int* ptr=&a;
    
    *ptr=999;// it rewrites value at that address.
    cout<<"Address of A is "<<ptr<<endl;
    cout<<"The value of a is "<<*(ptr)<<endl;  //Here * is used as a dereferencing variable

    // new keyword/operator
    int *p=new int(40);
    cout<<"\nnew keyword"<<endl;
    cout<<"The value at address P is "<<*p<<endl;

    //also we can allocate contigues memory by new keyword and can use it.
    int *arr1=new int[3];
    arr1[0]=1;
    // arr1[2]=2;
    //or
    *(arr1+1)=2;
    arr1[2]=3;

    //delete operator: we can delete dynamically allocated contigues block of memory by using delete operator.
    // delete[] arr1; 
    
    cout<<"\nThe value of arr[0] is "<<arr1[0]<<endl;
    cout<<"The value of arr[1] is "<<arr1[1]<<endl;
    cout<<"The value of arr[2] is "<<arr1[2]<<endl;

    
    

    return 0;
}