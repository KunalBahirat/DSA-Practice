#include <iostream>
using namespace std;
void print(int ar[], int n)
{
    
    for(int i=0;i<(sizeof(ar));i++){
        if(i%2!=0){
            cout<<i;
        }
    }
}
int main(){
    int a[5]={1,2,3,4,5};
    print(a,5);
    return 0;
}