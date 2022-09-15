#include <iostream>
using namespace std;
class Stack{
    int size;
    int *a;
    int top;
    public:
        Stack(int n){
            top=-1;
            size=n;
            a=new int[n];
        }
        void push(int num){
            if(top==size-1){
                cout<<"Stack full"<<endl;
                return;
            }
            top++;
            a[top]=num;
        }
        int pop(){
            if(top==-1){
                cout<<"Stack empty"<<endl;
                return -1;
            }
            int x=a[top];
            top--;
            return x;
        }
        int peek(){
            if(top==-1){
                cout<<"Stack empty"<<endl;
                return -1;
            }
            return a[top];
        }
        ~Stack(){
            delete []a;
        }
};
int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    // s.push(5);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    return 0;
}