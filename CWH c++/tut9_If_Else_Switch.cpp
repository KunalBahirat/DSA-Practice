// selection control structures//
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // selection control structure= 1) if else   
    /*
    int age;
    cout<<"Enter your age=";
    cin>>age;
    if (age<18 && age>0)
    {
        cout<<"You are a kid you cannot come to my party";
    }
    else if(age==18){
        cout<<"You are just 18 you will get a kid pass";
    }
    else if (age<1){
        (cout<<"You are not born yet");
    }
    else (cout<<"You can come to my party"); 
    */


    // selection control structure= 2) switch //
    int age;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You can come to my party";
        break;
    case 2:
        cout<<"You are 2";
        break;
    default:
    cout<<"No special cases";
        break;
    }

    return 0;

}