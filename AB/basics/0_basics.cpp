// Write a program to store and print the roll no., name , age and marks of a student using structures.
#include <iostream>
using namespace std;
struct student{
    int rollNo;
    string name;
    int age;
    int marks;
};

void printfun(struct student k){
    cout<<k.age<<endl;
    cout<<k.name<<endl;
    cout<<k.rollNo<<endl;
    cout<<k.marks<<endl;
}
    
int main(){
    struct student s1;
    s1.rollNo=20;
    s1.age=20;
    s1.name="Kunal";
    s1.marks=30;
    printfun(s1);


}