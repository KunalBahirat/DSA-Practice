
// Example of an OOP

// all functions are related to that structure only

// C code

/*
#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
void initialize(struct Rectangle *r1,int l1,int b1){
    r1->length=l1;
    r1->breadth=b1;
}
void area(struct Rectangle r1){
    cout<<"Area is = "<<r1.length*r1.breadth<<endl;
}
void changelength(struct Rectangle *r1,int l2){
    r1->length=l2;
}
int main(){
    struct Rectangle r;
    initialize(&r,10,20);
    area(r);
    changelength(&r,30);
    area(r);

// Main function acts like a manager

}*/


// c++ code

#include <iostream>
using namespace std;
class Rectangle{
  private:
    int length;
    int breadth;
    public:
        Rectangle(){length=breadth=1;}  //Default Constructor
        Rectangle(int,int);    // Parametrised Constructor
        int area();
        int perimeter();
        void setLength(int l2){length=l2;}
        void getlength(){cout<<"New length is: "<<length;}
        ~Rectangle();
};

Rectangle::Rectangle(int l1,int b1){
    length=l1;
    breadth=b1;
}
int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimeter(){
    return 2*(length+breadth);
}
Rectangle::~Rectangle(){};
int main(){
    Rectangle r(10,5);
    r.area();
    r.perimeter();
    r.setLength(20);
    r.getlength();
}
