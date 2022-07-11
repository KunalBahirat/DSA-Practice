0#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class queue{
    private:
        node *front;
        node *rear;
    public:
        queue(){
            front=rear=NULL;
        }
        ~queue(){
            node *p=front;
            while (p!=rear)
            {
                front=front->next;
                delete p;
                p=front;
            }
            delete p;            
        }
        void enqueue(int x);
        int dequeue();
        void display();

};

void queue::enqueue(int x){
    node *t=new node;
    if(t==NULL){
        cout<<"Queue is Full"<<endl;  //heap is full
    }
    t->data=x;
    t->next=NULL;

    if(front==NULL){
        front=rear=t;
    }
    else{
        rear->next=t;
        rear=t;
    }
} 

int queue :: dequeue(){
    node *p;int x=-1;
    if(front==NULL){
        cout<<"queue is empty"<<endl;
    }
    else{
        p=front;
        front=front->next;
        x=p->data;
        delete p;
    }
    return x;
}

void queue:: display(){
    node *p=front;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    q.display();
    return 0;
}