#include <iostream>
using namespace std;

template <class T>
class Arithmatic{
    private:
        T a;T b;
    public:
        Arithmatic(T a,T b);
        T add();
        T sub();
};

template <class T>
Arithmatic<T>::Arithmatic(T a,T b){
    this->a=a;
    this->b=b;
}
template <class T>
T Arithmatic<T>::add(){
    cout<<"Result: "<<a+b<<endl;
}
template <class T>
T Arithmatic <T>::sub(){
    cout<<"Result: "<<a-b<<endl;
}

int main(){
    Arithmatic<int> ar(10,20);
    ar.add();
    ar.sub();

    Arithmatic<float> ar1(10.7,20.5);
    ar1.add();
    ar1.sub();
    return 0;
}