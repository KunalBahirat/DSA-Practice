#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(){
            a=0;
            b=0;
        }
        complex(int x){
            a=x;
            b=0;
        }
        complex(int x,int y){
            a=x;
            b=y;
        }
        void print(){
            cout<<"The data is ("<<a<<","<<b<<")"<<endl;
        }

        

};
int main(){
    complex o1;
    complex o2(2);
    complex o3(2,3);
    o1.print();
    o2.print();
    o3.print();
    return 0;
}