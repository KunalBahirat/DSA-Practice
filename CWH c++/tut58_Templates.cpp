#include <bits/stdc++.h>
using namespace std;
template <class T>
class Vector{
    public:
        T *a;
        int size;
        Vector(int s){
            size=s;
            a=new T[size];
        }
        T dot_product(Vector &v2){
            T ans=0;
            for(int i=0;i<size;i++){
                ans+=this->a[i] * v2.a[i];
            }
            return ans;
        }
        ~Vector(){
           delete a;
        }
};
int main(){
    Vector <float> v1(3);Vector<float> v2(3);
    v1.a[0]=3.015;
    v1.a[1]=2.23;
    v1.a[2]=1.4123;

    v2.a[0]=1.41;
    v2.a[1]=0;
    v2.a[2]=3.487;

    cout<<v1.dot_product(v2);
    return 0;
}