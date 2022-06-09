#include <iostream>
#include "bits/stdc++.h"
using namespace std;

class Student{
    string name;
    public:
    int age;
    bool gender;

    Student(){                                
        cout<<"Default constructor"<<endl;    // Default constructor
    }

    Student(Student &a){
        cout<<"Copy constructor"<<endl;     //Copy constructor
        a.name=name;
        a.gender=gender;
        a.age=age;
    }
    Student(string n,int a,bool g){      // Parameterised Constructor
        cout<<"Parameterised Constructor"<<endl;
        name=n;
        age=a;
        gender=g;
    }
    
    bool operator == ( Student &a){      // operator overloading
        if(name==a.name & age==a.age & gender==a.gender) 
             return true ;
        else return false;

    }

    ~Student(){                             //here destrutor will be called three times 
        cout<<"Destructor called!"<<endl;
    }
    void setName(string n){                       //setters
        name=n;
    }
    void getInfo(){                              // getters
        cout<<endl<<"Info"<<endl;
        cout<<"Name= "<<name<<endl;
        cout<<"Age= "<<age<<endl;
        cout<<"Gender= "<<gender<<endl;
    }
};
int main(){
    // Student a;
    // a.name="kunal";    
    // a.age=20;    
    // a.gender=1;
    // cout<<a.name;



    // Student arr[3];
    // for(int i=0;i<3;i++){
    //     cout<<"Name = ";
    //     cin>>arr[i].name;
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }    
    // for(int i=0;i<3;i++){
    //     arr[i].getInfo();
    // }


    // Student arr[3];
    // for(int i=0;i<3;i++){
    //     cout<<"Name = ";
    //     string n;
    //     cin>>n;
    //     arr[i].setName(n);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }    
    // for(int i=0;i<3;i++){
    //     arr[i].getInfo();
    // }

    Student a("kunal",21,1);
    // a.getInfo();
    Student b;
    // Student c=a;
    Student c(a);


    (a==c) ?  cout<<"Same"<<endl:   cout<<"Not same"<<endl;  //operator overloading

    return 0;
}





// #include <iostream>
// using namespace std;
// template <class T>
//  class A{
//     T a,b;
//     public:
//         A(T a,T b);
//         T sum();
//         T sub();
// };
// template <class T>
// A <T>:: A(T a,T b){
//     this->a=a;
//     this->b=b;
// }
// template <class T>
// T A <T> ::sum(){
//     return a+b;
// }
// template <class T>
// T A <T> :: sub(){
//     return a-b;
// }
// int main(){
//     A <int> a(3,4);
//     cout<<a.sub()<<endl;
//     cout<<a.sum()<<endl;
//     return 0;
// }