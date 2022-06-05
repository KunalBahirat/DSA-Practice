#include <iostream>
using namespace std;
/*
int sum(int a, int b){
    cout<<"The sum of two numbers is=";
    return a+b; 
}
int sum(int a, int b,int c){
    cout<<"The sum of three numbers is=";
    return a+b+c;                               //sum is a overloaded function 
}
int main(){
    cout<<"3,4 " <<sum(3,4)<<endl;
    cout<<"3,4,5 "<<sum(3,4,5)<<endl;
    return 0;
}
*/
//cylinder
double volume(double r, int h){
    return (3.14*r*r*h);
}
//Cube
int volume(int a){
    return (a*a*a);
}
//Rectangle
int volume(int l,int b,int h){
    return (l*h*b);
}
int main(){
    cout<<"The volume of cylinder of radius 5.6, height 7 is = "<<volume(5.6,7)<<endl;
    cout<<"The volume of cube of side 4 is= "<<volume(4)<<endl;
    cout<<"The volume of rectangle of lenth 7,breadth 8 , height 9 is = "<<volume(7,8,9)<<endl;
}

