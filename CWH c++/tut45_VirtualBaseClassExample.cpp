#include <iostream>
using namespace std;
class Student{
    protected:
        int RollNumber;
    public:
        void set_Number(int a){
            RollNumber =a;
        }
        void print_Number(){
            cout<<"Your roll number is: "<<RollNumber<<endl;
        }
};
class Test : public virtual Student{
    protected:
        float maths,physics;
    public:
        void set_marks(float b,float c){
            maths=b;physics=c;
        }
        void print_Marks(){
            cout<<"Maths: "<<maths<<endl;
            cout<<"Physics: "<<physics<<endl;
        }
};
class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_Score(float d){
            score = d;
        }
        void display_Score(){
            cout<<"Score: "<<score<<endl;
        }
};
class Result : public Test,public Sports{
    protected :
        float total;
    public:
        void display(){
            total=maths + physics + score;
            print_Number();
            cout<<"Your result is here: "<<endl;
            print_Marks();
            display_Score();
            cout<<"Total score is: "<<total<<endl;
            cout<<"Percentage is: "<<total*100/300<<endl;
        }
};

int main(){
    Result x;
    x.set_Number(420);
    x.set_marks(94.0,95.0);
    x.set_Score(88.65);
    x.display();
    return 0;
}