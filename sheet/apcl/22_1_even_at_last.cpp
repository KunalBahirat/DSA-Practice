#include <iostream>
using namespace std;
class node{
    public:
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
        void even_at_last();
};
void LinkedList :: display(){
    node *p=first;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }

} 

LinkedList :: LinkedList(int arr[],int n){
    int i;
    node* t,*last;
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

    // display();
}

LinkedList :: ~LinkedList(){
    node *p=first;
    while(first){
        first=first->next;
        delete p;
        p=first;
    }
}

void LinkedList :: even_at_last(){
    node* p=first,*evenStart,*q;
    while((p->next)->data%2!=0){
        p=p->next;
    }
    q=p->next;evenStart=q;
}

int main(){
    int arr[]={1,3,4,5,6,2};
    int n=6;
    LinkedList k(arr,n);
    k.display();cout<<endl;
    k.even_at_last();
    return 0;
}