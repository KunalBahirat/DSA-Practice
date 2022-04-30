#include <iostream>
using namespace std;
class base1{
    protected:
        int base1_int;
    public:
        void set_base1Int(int a){
            base1_int=a;
        }
};
class base2{
    protected:
        int base2_int;
    public:
    void set_base2Int(int a){
        base2_int=a;
    }
};
/*
    The inherited derived class will look something like this:
    Data members:
        base1_int-->protected
        base2_int-->protected
        base3_int-->protected
    Data functions:
        set_base1Int-->public
        set_base2Int-->public
        set_base3Int-->public
*/
class base3{
    protected:
        int base3_int;
    public:
        void set_base3Int(int a){
            base3_int=a;
        }
};

class derived : public base1, public base2, public base3{
    public:
        void display(){
            cout<<"The value of base1_int is "<<base1_int<<endl;
            cout<<"The value of base2_int is "<<base2_int<<endl;
            cout<<"The value of base3_int is "<<base3_int<<endl;
            cout<<"The sum of the values is "<<base1_int+base2_int+base3_int<<endl;
        }

};
int main(){
    derived kunal;
    kunal.set_base1Int(50);
    kunal.set_base2Int(40);
    kunal.set_base3Int(10);
    kunal.display();
    return 0;
}