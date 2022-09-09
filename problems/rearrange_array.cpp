#include <iostream>
#include <vector>
using namespace std;

int GCD(int a,int b){
    if(b==0) return a;
    return GCD(b,a%b);
}
void r(int arr[],int d,int n){
    d=d%n;
    int gcd=GCD(d,n);
    cout<<gcd<<endl;
    for(int i=0;i<gcd;i++){
        int temp=arr[i];
        int j=i;
        while(1){
            int k=j+d;
            if(k>=n){
                k=k-n;
            }
            if(k==i){
                break;
            }
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
    }
}
int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int N = 7;
    int d = 2;
   
    // Function calling
    r(arr, 2,7);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}