#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
};
class LinkedList{
    public:
        node* head;
        LinkedList(){
            head=NULL;
        }
        LinkedList(int arr[],int n);
        ~LinkedList();

        void display();
        node * checkLoop();
        void removeLoop(node *);
};
LinkedList :: LinkedList(int arr[],int n){
    int i;
    node *t,*last;
    head=new node;
    head->data=arr[0];
    head->next=NULL;
    last=head;
    for(i=1;i<n;i++){
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    last->next = head;        // for arr1

}

LinkedList :: ~LinkedList(){
    node *p=head;
    while (head)
    {
        head=head->next;
        delete p;
        p=head;
    }
    
}

void LinkedList :: display(){
    node *p=head;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
} 

node * LinkedList :: checkLoop(){
    node * p,*q;
    p=head;q=head;
    while(p){
        p=p->next;
        q=q->next;
        if(p!=NULL){
            p=p->next;
        }
        else{
            cout<<"No Loop "<<endl;
            return NULL;
        }
        if(p==q){
            cout<<"LOOP is Found bro!"<<endl;
            return p;
        }
    }

}

void LinkedList :: removeLoop(node *p){
    node *q=p;
    p=head;
    while(p->next != q->next){
        p=p->next;
        q=q->next;
    }
    q->next=NULL;

        //     Node *slow=head;
        // Node *fast=head;
        // while(fast){
        //     slow=slow->next;
        //     fast=fast->next;
        //     if(fast) fast=fast->next;
        //     if(slow==fast) break;
        // }
        // if(!fast) return;
        // fast=head;
        // if(slow==head){
        //     while(slow->next!=fast) slow=slow->next;
        //     slow->next=NULL;return;
        // }
        // while(fast->next!=slow->next){
        //     fast=fast->next;
        //     slow=slow->next;
        // }
        // slow->next=NULL;
}

int main(){
    int n1=5;
    int arr1[n1]={8,3,4,7,9};
    int n2=4;
    int arr2[n2]={1,2,3,4};

    LinkedList k1(arr1,n1);
    node *p=k1.checkLoop();
    if(p!=NULL)
        k1.removeLoop(p);
    node *r=k1.checkLoop();
    k1.display();


    return 0;
}