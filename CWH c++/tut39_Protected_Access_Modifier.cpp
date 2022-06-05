#include <iostream>
using namespace std;
/*
    For a Protected member:
                            Public derivation   Private derivation     Protected derivation 
    1. Private members        Not inherited       Not inherited           Not inherited
    2. Protected members      Protected            Private                 Protected
    3. Public members          public              Private                 Protected

*/
class base{
    protected:
        int a;
    private:
        int b;
};

class derived : base{

};

int main(){
    base b1;
    derived d1;
    // cout<<d1.a;  // Will not run 
    return 0;
}