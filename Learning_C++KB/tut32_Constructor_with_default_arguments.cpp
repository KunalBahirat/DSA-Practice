#include <iostream>
using namespace std;
class simple{
    int data1;
    int data2;
    public:
        simple(int x=25,int y=0){   // in () default arguments
            data1=x;
            data2=y;

        }
        void print(){
            cout<<"Data 1 & data 2 are ("<<data1<<","<<data2<<")"<<endl;
        }
};
int main(){
    simple s1;  //Constructor with default arguments.
    s1.print();
    simple s2(1);
    s2.print();
    simple s3(1,2);  //Default arguments will be overwritten.
    s3.print();
    

    return 0;
}