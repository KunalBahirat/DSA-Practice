#include <iostream>
using namespace std; // jv jarvis
// ------------------------------Circular Linked List -----------------------------------------//
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
        void insert(int,int);
        void deleteNode(int);
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
    last->next=head;
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
    node* p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);

}

void LinkedList :: insert(int x,int pos){
    node *t=new node;
    node *p;
    if(pos==0){
        t->data=x;
        if(head==NULL){
            head=t;
            head->next=head;
        }
        else{
            p=head;
            while(p->next!=head){
                p=p->next;
            }
            p->next=t;
            t->next=head;
            head=t;
        }
    }
    else{
        t->data=x;
        for(int i=1;i<pos-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

void LinkedList :: deleteNode(int pos){
    node *p=head;
    int length=0;
    do{
        p=p->next;
        length++;
    }while(p!=head);
    p=head;

    if(pos<0 || pos>length){    // checking if index is valid or not
        return;
    }


    if(pos==0){
        while(p->next!=head){
            p=p->next;
        }
        
        if(p==head){        //If single node in circular LL
            delete head;
            head=NULL;
        }

        p->next=head->next;
        int x=head->data;
        cout<<"\nx="<<x<<endl;
        delete head;
        head=p->next;
       
    }
    else{
        node *q;
        for(int i=0;i<pos-2;i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        int x=q->data;
        cout<<"\nX= "<<x<<endl;
        delete q;
    }


}

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    LinkedList k(arr,n);
    k.display();
    // k.insert(10,0);
    // cout<<endl;
    // k.display();
    // cout<<endl;

    // k.display();cout<<endl;
    // k.deleteNode(10);
    // k.display();
    return 0;
}