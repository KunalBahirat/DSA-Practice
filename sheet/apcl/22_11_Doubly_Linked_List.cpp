#include <iostream>
using namespace std;
// -------------------------------- Doubly Linked List ---------------------------------//
class node{
    public:
        node *prev;
        int data;
        node* next;
};

class LinkedList{
    public:
        node *first;
        LinkedList(){
            first=NULL;
        }
        LinkedList(int arr[],int n);
        ~LinkedList();


        void display();
        void insert(int,int);
        void deleteNode(int);
        int length();
        
};

LinkedList :: LinkedList(int arr[],int n){
    int i;
    node *t, *last;
    first=new node;
    first->prev=NULL;
    first->data=arr[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new node;
        t->prev=last;
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

void LinkedList :: display(){
    node*p=first;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int LinkedList :: length(){
    node *p=first;
    int length=0;
    while(p){
        length++;
        p=p->next;
    }
    cout<<"length = "<<length<<endl;
    return length;

}
void LinkedList :: insert(int x,int pos){
    node *t=new node;
    t->data=x;
    int i;
    if(pos<=0 || pos>(length()+1)) {cout<<"Invalid Position"<<endl;return;}
    if(pos==1){
        if(first==NULL){
            t->prev=t->next=NULL;
            first=t;
        }
        else{
            t->prev=NULL;
            t->next=first;
            first->prev=t;
            first=t;
        }
    }
    else{
        node *p=first;
        for(i=1;i<pos-1;i++){
            p=p->next;
        }
        t->prev=p;
         t->next=p->next;
        if(p->next) p->next->prev=t;
        p->next=t;
    }
}

void LinkedList :: deleteNode(int pos){
    node *p=first; 

    if(pos == 1){
        first=first->next;
        delete p;
        if(first!=NULL) first->prev=NULL;
    }

    else{
        // 6 9 3 7 2
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        p->prev->next = p->next;     //      this is showing exception
        
        if(p->next) 
            p->next->prev=p->prev;
        delete p;
    }

}

int main(){
    // node *p=new node;
    // p->prev=NULL;
    // p->next=NULL;
    // p->data=20;
    // cout<<p->prev<<endl;
    // cout<<p->data<<endl;
    // cout<<p->next<<endl;

    int n=5;
    int arr[n]={6,9,3,7,2};
    LinkedList k(arr,n);
    // k.display();
    // k.insert(10,0);
    // k.insert(10,3);
    // k.display();

    // k.deleteNode(0);
    k.deleteNode(1);
    k.display();
    return 0;
}