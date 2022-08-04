#include <iostream>
using namespace std;
#include "bits/stdc++.h"
class Stack1{
    int N;
    queue <int> q1;
    queue <int> q2;
    public :
        Stack1(){
            N=0;
        }
        void push(int x){
            q2.push(x);
            N++;
            while (!q1.empty())
            {
                /* code */
                q2.push(q1.front());
                q1.pop();
            }
            swap(q1,q2);
        }

        void pop(){
            q1.pop();
            N--;
        }
        void display(){
            queue <int > q4=q1;
            while(!q4.empty()){
                cout<<q4.front()<<" ";
                q4.pop();
            }cout<<endl;
        }

};
// costly pop method
class Stack{
    queue <int> q1;
    queue <int> q2;
    int N;
    public:
        Stack(){
            N=0;
        }
        void push(int x){
            q1.push(x);
            N++;
        }
        void pop(){
            if(N==0){
                return;
            }
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
            N--;
            swap(q1,q2);

        }
        void display(){
            queue <int> q4=q1;
            while(!q4.empty()){
                cout<<q4.front()<<" ";
                q4.pop();
            }
            cout<<endl;
        }
};

int main(){
    Stack1 x;
    x.push(1);
    x.push(2);
    x.push(3);
    x.push(4);
    x.display();
    x.pop();
    x.display();
    return 0;
}