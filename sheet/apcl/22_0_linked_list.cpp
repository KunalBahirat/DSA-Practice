#include <iostream>
#include "bits/stdc++.h"
using namespace std;
//deleting pointer is necessary

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
        void rDisplay(node *);
        void count();
        int sum(node *);
        int maxi();
        int LSearch(int);
        int improved_Lsearch(int);
        void insert(int k,int i);
        void inser_at_last(int );
        void insert_in_sorted_list(int);
        void delete_element(int);
        bool isSorted();
        bool Ris_sorted(node *,node *);
        void rmDuplicates();
        void reverse(int);
        void reverse2();
        void recursiveReverse(node *,node *);
        void conacatenate(node*);
        void merge(node *,node *);
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

void LinkedList :: count(){
    node *p=first;
    int count=0;
    while(p){
        count++;
        p=p->next;
    }
    cout<<"Count = "<<count;
}

void LinkedList :: rDisplay(node *p){
    if(!p){
        return;
    }
    cout<<p->data<<" ";
    rDisplay(p->next);
}

int LinkedList :: sum(node *p){
    if(!p){
        return 0;
    }
    return sum(p->next) +p->data;
}

int LinkedList :: maxi(){
    node *p=first;
    int maxi=INT_MIN;
    while(p!=NULL){
        maxi=max(maxi,p->data);
        p=p->next;
    }
    return maxi;
}

int LinkedList :: LSearch(int k){
    node *p=first;
    for(int i=0;i<6;i++){
        if(p->data==k){
            return i;
        }
        p=p->next;
    }
    return -1;
}

int LinkedList :: improved_Lsearch(int k){
    node *p=first;
    node *q;
    int index=0;
    while(p){
        if(p->data==k){
            q->next=p->next;
            p->next=first;
            first=p;
            return index;
        }
        q=p;
        p=p->next;
        index++;

    }
    return -1;
}

void LinkedList :: insert(int k,int index){
    node *p=first;
    node *t=new node;
    if(index==0){
        t->data=k;
        t->next=p;
        first=t;
    return;
    }
    for(int i=0;i<index-1;i++){
        p=p->next;
    }
    t->data=k;
    t->next=p->next;
    p->next=t;

}

void LinkedList :: inser_at_last(int x){
    node * t=new node;
    node* last;
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=t;        // first=last=t;
    }
    else{
        // last->next=t;
        // last=t;
    }
}

void LinkedList :: insert_in_sorted_list(int x){
    node* p=first,*q;
    q=NULL;

    if(x<p->data){
        node *t=new node;
        t->data=x;
        t->next=first;
        first=t;
        return;
    }

    while( p && (p->data < x)){
        q=p;
        p=p->next;
    }
    node *t=new node;
    t->data=x;
    t->next=q->next;
    q->next=t;
}

void LinkedList :: delete_element(int index){
    node *p=first;
    node* q =NULL;
    int x;
    if(index==0){
        q=p;
        p=p->next;
        x=q->data;
        delete q;
    }
    else{
        for(int i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        x=p->data;
            q->next=p->next;
            delete p;
    }

    cout<<"x = "<<x<<endl;

}

bool LinkedList :: isSorted(){
    node *p=first;
    int x=INT_MIN;
    while(p){
        if(p->data < x)
            return false;
        x=p->data;
        p=p->next;
    }
    return true;
}

bool LinkedList :: Ris_sorted(node *p,node * q){
    if(!p){
        return true;
    }
    bool restList = Ris_sorted(p->next,q->next);
    return (q->data < p->data) && restList ;
}

void LinkedList :: rmDuplicates(){
    node *p=first;
    node *q=p->next;
    while(q){
        if(p->data != q->data){
            p=p->next;
            q=q->next;
        }
        else{
        p->next=q->next;
        delete q;
        q=p->next;
        }
    }
} 

void LinkedList :: reverse(int n){
    node *p=first;
    int a[n];
    int i=n-1;
    while(p){
        a[i]=p->data;
        p=p->next;
        i--;
    }
    p=first;
    for(int i=0;i<n;i++){
        p->data=a[i];
        p=p->next;
    }
}

void LinkedList :: reverse2(){
    node *r,*q,*p;
    p=first;
    q=NULL;
    r=NULL;
       while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;         //IMP step
}

void LinkedList :: recursiveReverse(node *q,node*p){
    if(p!=NULL){
        recursiveReverse( p ,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}

void LinkedList :: conacatenate(node *q){           // p=first , q=second
    node *p=first;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}

void LinkedList :: merge(node *fir,node*sec){
    node *third=NULL;
    node *last=NULL;
    if(fir->data < sec->data){
        third=last=fir;
        fir=fir->next;
        last->next=NULL;
    }
    else{
        third=last=sec;
        sec=sec->next;
        last->next=NULL;
    }

    while(fir!=NULL && sec!=NULL){
        if(sec->data < fir->data ){
            last->next=sec;
            last=sec;
            sec=sec->next;
            last->next=NULL;
        }
        else{
            last->next=fir;
            last=fir;
            fir=fir->next;
            last->next=NULL;
           
        }
    }
    if(fir!=NULL){
        last->next=fir;
    }
    else{
        last->next=sec;
    }
}

int main(){
    // int arr[]={3,5,6,10,26,20};
    // int n=6;
    // LinkedList k(arr,n);

    // k.rDisplay(k.first);    // make first public to run function

    // k.display();

    // cout<<"Sum ="<<k.sum(k.first)<<endl;

    // cout<<"Maximum= "<<k.maxi()<<endl;

    // cout<<"3 is present at index "<<k.LSearch(5)<<endl;
    // cout<<"3 is present at index "<<k.improved_Lsearch(3)<<endl;


    // k.insert(11,5);

    // k.insert_in_sorted_list(0);
    // k.display();

    // k.display();
    // k.delete_element(4);
    // k.display();

    // k.display();
    // cout<<k.isSorted();
    // cout<<k.Ris_sorted(k.first->next,k.first)<<endl;

    // int arr[]={3,5,5,6,6,7,8};
    // int n=7;
    // LinkedList k(arr,n);
    // k.rmDuplicates();
    // k.display();

    // int arr[]={1,2,3,4,5,6,7};
    // int n=7;
    // LinkedList k(arr,n);
    // k.display();
    // k.reverse(n);
    // k.display();

    // k.display();
    // k.reverse2();
    // k.display();

    // k.display();
    // node* q=NULL,*p=k.first;
    // k.recursiveReverse(q,p);
    // k.display();


    // int arrOne[4]={2,8,10,16};
    // int arrSecond[4]={4,7,12,14};
    // LinkedList one(arrOne,4);
    // LinkedList two(arrSecond,4);
    // one.conacatenate(two.first);
    // one.display();

    // one.merge(one.first,two.first);
    // one.display(); 




    

    return 0;
}