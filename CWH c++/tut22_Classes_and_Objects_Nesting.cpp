#include <iostream>
#include <string>
using namespace std;
/*
OOPS -----Classes and objects
+ class is a extension of structure (struct)

   Structures                              class (Structures + more)
1)members are public                    1) members are public as well as private
2)we cant include methods in it         2) can have methods and properties
                                        3) structures in c++ are typedefed
                                        4) we can declare objects along with the class  declaration
                                          Ex.   class employee{
                                                    //class defination
                                                } kunal,rohit,rohan ;
*/

//----------Nesting of member functions-------- (line no 78,52 )

class binary
{
    string s;  // It is private without mentioning

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment()
{
    //chk_bin();    //It is called as nesting means calling function in other funtion from same class. 
    for (int i = 0; i < s.length(); i++)              //                 [ without doing b.chk_bin(); ]
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout <<s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();           //nesting==      //b.chk_bin();
    b.ones_compliment();
    b.display();
    return 0;
}

// int main()
// {
//     string a = "2020";
//     int b;
//     b = a.length();
//     cout << b;
//     return 0;
// }