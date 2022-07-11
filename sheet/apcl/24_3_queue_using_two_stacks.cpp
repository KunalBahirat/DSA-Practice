#include <iostream>
using namespace std;
#include <stack>
class queue{
    stack <int> s1,s2;
    public:
        void enque(int);
        int deque();
};
void queue :: enque(int x){
    s1.push(x);
}
int queue :: deque(){
    if(s2.empty()){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
    }
    int top=s2.top();
    s2.pop();
    return top;
}
// void display(stack <int> s){
    
// }
int main(){
    queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    cout<<q.deque()<<endl;
    q.enque(5);
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;
    return 0;
}