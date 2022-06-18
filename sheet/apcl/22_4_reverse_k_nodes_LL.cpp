#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
};

class LinkedList{
    private :
    public:
        node *first;
        LinkedList(){
            first=NULL;
        }
        LinkedList(int arr[],int n);
        ~LinkedList();

        void reversek(node *,node *,node *);
        void display();
};

LinkedList :: LinkedList(int arr[],int n){
    int i;
    node *t, *last;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;    
    }
}

LinkedList ::~LinkedList(){
    node *p=first;
    while(first){
        first=first->next;
        delete p;
        p=first;
    }
}

void LinkedList :: reversek(node *p,node *q,node *r){
    if(q==NULL){
        return;
    }
    q->next=p;
    p->next=r;
    q=first;
    q->next=reversek(q,r,r->next);
}

void LinkedList :: display(){
    node *p=first;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}


int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    LinkedList k(arr,n);
    node *p=k.first;
    node *q=p->next;
    node *r=q->next;
    k.reversek(p,q,r);
    k.display();

    p=NULL;
    delete p;
    q=NULL;
    delete q;
    r=NULL;
    delete r;

    return 0;
}