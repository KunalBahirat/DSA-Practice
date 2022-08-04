#include <iostream>
class Node{
    public: 
        int data;
        Node *next;
        Node(){
            next=NULL;
        }
};
class Queue{
    Node *front,*rear;
    public: 
        Queue(){
            front=rear=NULL;
        }
        void enqueue(int data){
            Node *t=new Node;
            if(t==NULL){
                std::cout<<"Queue is full"<<std::endl;
                return;
            }
            if(front==NULL){
                t->data=data;
                front=rear=t;
                t->next=NULL;
            }
            else{
                t->data=data;
                rear->next=t;
                t->next=NULL;
                rear=t;
            }
        }
        void display(){
            if(front==NULL){
                std::cout<<"Queue is empty"<<std::endl;
                return;
            }
            else {
                Node *p=front;
                while(p){
                    std::cout<<p->data<<" ";
                    p=p->next;
                }
            }
        }
        int dequeue(){
            int x=-1;
            if(front==NULL){
                std::cout<<"Queue is empty"<<std::endl;
                return x;
            }
            Node *t=front;
            x=t->data;
            front=front->next;
            delete t;

            return x;
        }
        bool isEmpty(){
             return front==NULL;
        }

};