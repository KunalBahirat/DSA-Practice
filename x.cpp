#include <iostream>
#include "bits/stdc++.h"
using namespace std;
class node{
    public:
    int data;
    node *next;
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
        void reverse();
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

void LinkedList :: display(){
    node*p=first;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void LinkedList :: reverse(){
    node *p=first;
    node *q=NULL,*r=NULL;
    while(p){
        r=q;q=p;p=p->next;
        q->next=r;
    }
    first =q;

}
int main(){
    int arr[]={1,2,3,4,5};
    LinkedList k(arr,5);
    k.display();
    
}