#include <iostream>
using namespace std;

class queue{
    private:
        int front;
        int rear;
        int *Q;
        int size;
    public:
        queue(){rear=front=0;this->size=5;Q=new int[size];}
        queue(int size){rear=front=0;this->size=size;Q=new int[this->size];}
        ~queue(){delete Q;}

        void display();
        void enqueue(int x);

};

void queue :: enqueue (int x){
    if((rear+1)%size == front){
        cout<<"queue is full "<<endl;
        return;
    }
    else{
        rear=(rear+1)%size;
        Q[rear]=x;
    }
}

void queue:: display(){

    int i=front+1;

    do{
        cout<<Q[i]<<" ";
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
    cout<<endl;
    
}

int main(){
    queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    q.enqueue(50);
    q.enqueue(70);
    q.display();
    return 0;
}