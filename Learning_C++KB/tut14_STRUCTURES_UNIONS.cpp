#include <iostream>
using namespace std;
//------------STRUCTURES------------
/*
typedef struct employee{
    int Id;
    float salary;
}emp;
int main(){
    struct employee kunal;
    kunal.Id=12;
    kunal.salary=150000;
    cout<<kunal.Id<<endl;;
    cout<<kunal.salary<<endl;
    emp AB;
    AB.Id=13;
    AB.salary=150001;
    cout<<AB.Id<<endl;
    cout<<AB.salary<<endl;
    return 0;
}
*/
//-------------UNIONS----------

union money{
    int rice;
    char car;
};
int main(){
    
    union money m1;
    /*
    m1.rice=15;
    cout<<m1.rice<<endl;
    */
    m1.rice=15;
    m1.car='v';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    
    return 0;
    
}
