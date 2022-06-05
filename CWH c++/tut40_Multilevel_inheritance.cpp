#include <iostream>
using namespace std;
class Student{
    protected:
        int roll_number;
    public:
        void setRollNumber(int);
        void getRollNumber(void);
};

void Student :: setRollNumber(int a){    // Scope resolution operator "::"
    roll_number = a;
}

class Exam : public Student{
   protected :
       float maths;
       float physics;
   public:
       void setmarks(float,float);
       void getmarks(void);
};

void Exam :: setmarks(float b,float c){
    maths= b;
    physics = c;
} 
void Exam :: getmarks(){
    cout<<"Your marks in physics are "<<physics<<endl; 
    cout<<"Your marks in maths are "<<maths<<endl; 

}

class Marks : public Exam {
    float percentage;
    public:
        void display(){
            cout<<"Your roll number is "<<roll_number<<" Your percentage is "<<(maths + physics)/2<<endl;
        }
        
};

/*
Notes: 
    If we are inheriting B from A & C from B : [ A--> B --> C]
    1. A is the base class for B and B is the base class for C
    2. A-->B-->C is call the Inheritance path
    
*/

int main(){
    int a;
    float b,c;
    cout<<"Enter roll no ";
    cin>>a;
    cout<<"Enter your maths and physics marks ";
    cin>>b;
    cin>>c;
    Marks Kunal;
    Kunal.setRollNumber(a);
    Kunal.setmarks(b,c);
    Kunal.getmarks();
    Kunal.display();
   
    return 0;
}