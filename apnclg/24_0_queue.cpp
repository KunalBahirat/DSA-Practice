#include <iostream>
using namespace std;

template <class T>
class queue{
    private:
        int front;
        int rear;
        int size;
        T *Q;
    public:
        queue(){front=rear=-1;size=10;Q=new int[size];}
        queue(int size){front=rear=-1;this->size=size;Q=new T[this->size];}
        ~queue(){delete Q;}
        void enqueue(T);
        T dequeue();
        void display();
        // isEmpty isFull
};

template <class T>
void queue <T> :: enqueue(T x){
    if(rear==size-1){
        cout<<"queue is full "<<endl;
        return;
    }
    rear++;
    Q[rear]=x;
}
template <class T>
T queue <T> :: dequeue(){
    if(rear==front){
        cout<<"queue is empty"<<endl;
        return 0;
    }
    front++;
    T x=Q[front];
    return x;
}
template <class T>
void queue <T> :: display(){
    for(int i=front+1;i<=rear;i++) cout<<Q[i]<<" ";
    cout<<endl;
} 

int main(){
    queue <int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    cout<<q.dequeue()<<endl;
    q.display();
    return 0;
}