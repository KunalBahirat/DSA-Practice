#include <iostream>
using namespace std;
int main(){
    int A[5]={1,2,3,4,5};
    // int A[5]={1,2};   //Then array will be {1,2,0,0,0}

    for (int i = 0; i <5; i++)
    {
        cout<<A[i]<<"\t"<<&A[i]<<endl;
    }
     cout<<"Third element in array is:"<<A[2]<<endl;
     cout<<"Third element in array is:"<<2[A]<<endl;
     cout<<"Third element in array is:"<<*(A+2)<<endl;
    
    return 0;
}