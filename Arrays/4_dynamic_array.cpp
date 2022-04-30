#include <iostream>
using namespace std;
 // dynamic array
int main(){
    int *p;                 //Decalring array in heap memory
    p=new int[5];
    for(int i=0;i<5;i++){
        cin>>p[i];
    }
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
    int *q=new int[10];                
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    delete []p;  
    p==q;                       
    q=NULL;
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<p[i]<<" ";
    }

    return 0;
}