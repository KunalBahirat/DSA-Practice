#include <iostream>
#include "bits/stdc++.h"
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

        void display();
        void reverseK(int);
        int length();
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

int LinkedList ::length(){
    node *p=first;
    int length=0;
    while(p){
        length++;
        p=p->next;
    }
    return length;
}
void LinkedList :: reverseK(int k){
    //   k=5
    //  10, 30, 40, 20, 50, 70, 90,  100,  110,120,130,140
    // first                   last  start              p
    int x=length()-k;
    node *p=first;
    node *start,*last;
    int i=0;
    while(p->next!=NULL){
        if(i==x){
            start=p;
        }
        if(i==x-1){
            last=p;
        }
        i++;
        p=p->next;
    }
    last->next=NULL;
    p->next=first;
    first=start;
}
int main(){
    int arr[]={10,30,40,20,50,70,90,100,110,120,130,140};
    LinkedList k(arr,12);
    k.display();
    k.reverseK(5);
    k.display();
    return 0;
}
