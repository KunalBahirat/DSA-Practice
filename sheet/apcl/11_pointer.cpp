#include <iostream>
using namespace std;
//call by reference
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void fun1(int *a){
    *a++;
}
int main(){
    // int a=10,b=20;
    // swap(&a,&b);
    // cout<<a<<" "<<b;
    // return 0;

    int a=10;
    fun1(a);
    cout<<a;

}