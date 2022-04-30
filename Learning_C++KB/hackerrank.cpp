#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class data{
    int age,standard;
    string name,surname;
    public:
      void setdata(int a,int b,string c,string d){
          age=a;
          standard=b;
          name=c;
          surname=d;
      }
      void getdata(){
        cout<<age<<endl;
        cout<<name<<","<<surname<<endl;
        cout<<standard;
        cout<<"\n"<<age<<","<<name<<","<<surname<<","<<standard;
      }
};

int main() {
    int age,standard;
    string name,surname;
    cin>>age>>name>>surname>>standard;
    data alian;
    alian.setdata(age,standard,name,surname);
    alian.getdata();
    return 0;
}
