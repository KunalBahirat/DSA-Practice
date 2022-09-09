#include <bits/stdc++.h>
using namespace std;
class B;
class A{
    friend class B;
    int x;
    public:
        A(int n){
            x=n;
        }

        void printsecond(B obj);
        
};
class B{
    int y;
    friend class A;
    public:
        B(int n){
            y=n;
        }
        void print(A obj){
            cout<<obj.x<<endl;
        }
};

void A ::  printsecond(B obj){
            cout<<obj.y<<endl;
}
int main(){
    A obj1(50);
    B obj2(-1);
    obj2.print(obj1);


    B obj5(500);
    A obj6(-1);
    obj6.printsecond(obj5);

    return 0;
}