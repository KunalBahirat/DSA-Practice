#include <iostream>
using namespace std;

// class employee
// {
//     int id;
//     int salary;

// public:
//     void setid(void)
//     {
//         salary = 22;
//         cout << "Enter id" << endl;
//         cin >> id;
//     }
//     void getid(void)
//     {
//         cout << "Employee id is " << id << endl;
//     }
// };

// int main()
// {
//     employee kb[5];
//     for (int i = 0; i < 5; i++)
//     {
//         kb[i].setid();
        
        
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         kb[i].getid();
//     }
    

//     return 0;
// }


class complex{
    int a,b;
    public :
        void setdata(int v1,int v2){
            a=v1;
            b=v2;
        }
        void setdatabysumnum(complex o1,complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void print(void){
            cout<<"The  complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    // c1.print();
    c2.setdata(3,4);
    // c2.print();
    c3.setdatabysumnum(c1,c2);
    // c3.print();

    c1.print();
    c2.print();
    c3.print();

}