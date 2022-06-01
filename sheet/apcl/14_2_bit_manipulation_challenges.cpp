#include <iostream>
using namespace std; 

// How to check if the number is power of 2 
bool ispowerof2(int n){
    return (n & !(n & (n-1)));
}
// count ones in binary number
int countOnes(int n){
    int flag=0;
    while(n>0){   // or we can write    while(n)
        n=n&(n-1);
        flag++;
    }
    return flag;
}

// program to generate all possible subset of set
void subsets(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}

int main(){
    // cout<<ispowerof2(0);
    // cout<<countOnes(5);
    int a[]={1,2,3,4};
    subsets(a,4);



    return 0;
}