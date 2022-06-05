#include <iostream>
using namespace std;
// Destructor does not takes any value nor does it return any value.
int count=0;
class Num
{
public:
    Num()                       // Constructor
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    ~Num(){                     // Destructor
        cout<<"This is the time when Destructor is called for object number "<<count<<endl;
        count--;
    }

};
int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    Num n1;
    {                                           // Block == When we exit this block Destructor will be activated for 
        cout<<"Entering the block "<<endl;     //          objects(of constructor) created inside this block. 
        cout<<"Creating two more objects "<<endl;
        Num n2,n3;
        cout<<"Exiting this block "<<endl;
    }
    cout<<"Back to main"<<endl;
   
    return 0;
}