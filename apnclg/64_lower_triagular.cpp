#include <bits/stdc++.h>
using namespace std;
class LowerTriangularRM{                // row major
    int size;
    int *A;
    public:
        LowerTriangularRM(int n){
            size=n;
            A=new int[size*(size+1)/2];

        }
        void set(int i,int j,int x){
            if(i>=j){
                A[i*(i-1) /2 + j-1]=x;
            }
        }
        int get(int i,int j){
            if(i>=j){
                return A[i*(i-1)/2+j-1];
            }
            else return '0';
        }
        void print(){
            for(int i=1;i<=size;i++){
                for(int j=1;j<=size;j++){
                    if(i>=j){
                        cout<<A[i*(i-1)/2+j-1]<<" ";
                    }
                    else{
                        cout<<"0 ";
                    }
                    
                }
                cout<<"\n";
            }
        }
        ~LowerTriangularRM(){
            delete []A;
        }

};
class LowerTriangularCM{           // column major
    int *A;
    int size;
    public  :
        LowerTriangularCM(int n){
            size=n;
            A=new int[size*(size+1)/2];
        }
        ~LowerTriangularCM(){
            delete []A;
        }
        void set(int i,int j,int x){
            if(i>=j){
                A[size* (j-1) -(j-2)*(j-1)/2 +(i-j)]=x;
            }
        }
        void display(){
            for(int i=1;i<=size;i++){
                for(int j=1;j<=size;j++){
                    if(i>=j){
                        cout<<A[size* (j-1) -(j-1)*(j-2)/2 + (i-j)]<<" ";
                    }
                    else cout<<"0 ";
                }
                cout<<"\n";
            }
        }
};
int main(){
    //   LowerTriangularRM x(5);
    // x.set(1,1,1);
    // x.set(2,1,2);
    // x.set(3,1,3);
    // x.set(4,1,4);
    // x.set(5,1,5);
    // x.set(2,2,6);
    // x.set(3,2,7);
    // x.set(4,2,8);
    // x.set(5,2,9);
    // x.set(3,3,10);
    // x.set(4,3,11);
    // x.set(5,3,12);
    // x.set(4,4,13);
    // x.set(5,4,14);
    // x.set(5,5,15);
    // x.print();
      LowerTriangularCM x(5);
    x.set(1,1,1);
    x.set(2,1,2);
    x.set(3,1,3);
    x.set(4,1,4);
    x.set(5,1,5);
    x.set(2,2,6);
    x.set(3,2,7);
    x.set(4,2,8);
    x.set(5,2,9);
    x.set(3,3,10);
    x.set(4,3,11);
    x.set(5,3,12);
    x.set(4,4,13);
    x.set(5,4,14);
    x.set(5,5,15);
    x.display();
    return 0;
}