#include <bits/stdc++.h>
using namespace std;
class DiagonalMatrix{
    int *A;
    int n;
    public: 
        DiagonalMatrix(int n){
            this->n=n;
            A=new int[n];
        }
        void set(int i,int j,int x){
            if(i==j){
                A[i-1]=x;
            }
        }
        int get(int i,int j){
            if(i==j) return A[i-1];
            else return 0;
        }
        void Print(){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j) cout<<A[i-1]<<" ";
                    else cout<<"0 ";
                }
                cout<<"\n";
            }
        }
};

int main(){
    DiagonalMatrix D(5);
    D.set(0,0,3);
    D.set(1,1,7);
    D.set(2,2,4);
    D.set(3,3,9);
    D.set(4,4,6);
    D.Print();
  
    return 0;
}