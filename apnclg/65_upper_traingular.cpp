#include <bits/stdc++.h>
using namespace std;
class UpperRM{
    int size;
    int *A;
    public:
        UpperRM(int n){
            size=n;
            A=new int[size*(size+1)/2];

        }
        void set(int i,int j,int x){
            if(i<=j){
                A[size * (i-1) - (i-1)*(i-2)/2 +j-i]=x;
            }
        }
        int get(int i,int j){
            if(i<=j){
                return A[size*(i-1)- (i-1)*(i-2)/2+j-i];
            }
            else return '0';
        }
        void print(){
            for(int i=1;i<=size;i++){
                for(int j=1;j<=size;j++){
                    if(i<=j){
                        cout<<A[size*(i-1)-(i-1)*(i-2)/2+(j-i)]<<" ";
                    }
                    else{
                        cout<<"0 ";
                    }
                    
                }
                cout<<"\n";
            }
        }
        ~UpperRM(){
            delete []A;
        }
};
class UpperCM{
    int size;
    int *A;
    public:
        UpperCM(int n){
            size=n;
            A=new int[size*(size+1)/2];
        }
        void set(int i,int j,int x){
            if(i<=j){
                A[j*(j-1)/2 + i-1]=x;
            }
        }
        int get(int i,int j){
            if(i<=j){
                return A[j*(j-1)/2 +i-1];
            }
            else return '0';
        }
        void print(){
            for(int i=1;i<=size;i++){
                for(int j=1;j<=size;j++){
                    if(i<=j){
                        cout<<A[j*(j-1)/2+i-1]<<" ";
                    }
                    else{
                        cout<<"0 ";
                    }
                    
                }
                cout<<"\n";
            }
        }
        ~UpperCM(){
            delete []A;
        }
};
int main(){
    // UpperRM u(5);
    // u.set(1,1,1);
    // u.set(1,2,2);
    // u.set(2,2,3);
    // u.set(1,3,4);
    // u.set(2,3,5);
    // u.set(3,3,6);
    // u.set(1,4,7);
    // u.set(2,4,8);
    // u.set(3,4,9);
    // u.set(4,4,10);
    // u.set(1,5,11);
    // u.set(2,5,12);
    // u.set(3,5,13);
    // u.set(4,5,14);
    // u.set(5,5,15);
    // u.print();
    UpperCM u(5);
    u.set(1,1,1);
    u.set(1,2,2);
    u.set(2,2,3);
    u.set(1,3,4);
    u.set(2,3,5);
    u.set(3,3,6);
    u.set(1,4,7);
    u.set(2,4,8);
    u.set(3,4,9);
    u.set(4,4,10);
    u.set(1,5,11);
    u.set(2,5,12);
    u.set(3,5,13);
    u.set(4,5,14);
    u.set(5,5,15);
    u.print();
    return 0;
}