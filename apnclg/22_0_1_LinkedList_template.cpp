#include <iostream>
#include "bits/stdc++.h"
using namespace std;
//creating template class 
// template <class T> 
// Node <T> 
//deleting pointer is necessary

template <class T> 
class node{
    public:
        T data;
        node* next;
};

template <class T>
class LinkedList{
    private :
    public:
        node <T> *first;
        LinkedList(){
            first=NULL;
        }
        LinkedList(T arr[],T n);
        ~LinkedList();

        void display();
        void rDisplay(node <T> *);
        void count();
        T sum(node <T> *);
        T maxi();
        T LSearch(T);
        T improved_Lsearch(T);
        void insert(T k,T i);
        void inser_at_last(T );
        void insert_in_sorted_list(T);
        void delete_element(T);
        bool isSorted();
        bool Ris_sorted(node <T> *,node <T> *);
        void rmDuplicates();
        void reverse(T);
        void reverse2();
        void recursiveReverse(node <T> *,node <T> *);
        void conacatenate(node <T>*);
        void merge(node <T> *,node <T> *);
};
template <class T>
LinkedList <T> :: LinkedList(T arr[],T n){
    T i;
    node <T> *t, *last;
    first=new node <T>;
    first->data=arr[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new node <T>;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;    
    }
}
template <class T>
LinkedList <T> ::~LinkedList(){
    node <T> *p=first;
    while(first){
        first=first->next;
        delete p;
        p=first;
    }
}
template <class T>
void LinkedList <T> :: display(){
    node <T>*p=first;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
template <class T>
void LinkedList <T> :: count(){
    node <T> *p=first;
    T count=0;
    while(p){
        count++;
        p=p->next;
    }
    cout<<"Count = "<<count;
}
template <class T>
void LinkedList <T> :: rDisplay(node <T> *p){
    if(!p){
        return;
    }
    cout<<p->data<<" ";
    rDisplay(p->next);
}
template <class T>
T LinkedList <T> :: sum(node <T> *p){
    if(!p){
        return 0;
    }
    return sum(p->next) +p->data;
}
template <class T>
T LinkedList <T> :: maxi(){
    node <T> *p=first;
    T maxi=INT_MIN;
    while(p!=NULL){
        maxi=max(maxi,p->data);
        p=p->next;
    }
    return maxi;
}
template <class T>
T LinkedList <T> :: LSearch(T k){
    node <T> *p=first;
    for(int i=0;i<6;i++){
        if(p->data==k){
            return i;
        }
        p=p->next;
    }
    return -1;
}
template <class T>
T LinkedList <T> :: improved_Lsearch(T k){
    node <T> *p=first;
    node <T> *q;
    T index=0;
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
template <class T>
void LinkedList <T> :: insert(T k,T index){
    node <T> *p=first;
    node <T> *t=new node <T>;
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
template <class T>
void LinkedList <T> :: inser_at_last(T x){
    node <T> * t=new node <T>;
    node <T>* last;
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
template <class T>
void LinkedList <T> :: insert_in_sorted_list(T x){
    node <T>* p=first,*q;
    q=NULL;

    if(x<p->data){
        node <T> *t=new node <T>;
        t->data=x;
        t->next=first;
        first=t;
        return;
    }

    while( p && (p->data < x)){
        q=p;
        p=p->next;
    }
    node <T> *t=new node <T>;
    t->data=x;
    t->next=q->next;
    q->next=t;
}
template <class T>
void LinkedList <T> :: delete_element(T index){
    node <T> *p=first;
    node <T>* q =NULL;
    T x;
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
template <class T> 
bool LinkedList <T> :: isSorted(){
    node <T> *p=first;
    T x=INT_MIN;
    while(p){
        if(p->data < x)
            return false;
        x=p->data;
        p=p->next;
    }
    return true;
}
template <class T>
bool LinkedList <T> :: Ris_sorted(node <T> *p,node <T> * q){
    if(!p){
        return true;
    }
    bool restList = Ris_sorted(p->next,q->next);
    return (q->data < p->data) && restList ;
}
template <class T>
void LinkedList <T> :: rmDuplicates(){
    node <T> *p=first;
    node <T> *q=p->next;
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
template <class T>
void LinkedList <T> :: reverse(T n){
    node <T> *p=first;
    T a[n];
    T i=n-1;
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
template <class T>
void LinkedList <T> :: reverse2(){
    node <T> *r,*q,*p;
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
template <class T>
void LinkedList <T> :: recursiveReverse(node <T> *q,node <T>*p){
    if(p!=NULL){
        recursiveReverse( p ,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}
template <class T>
void LinkedList <T> :: conacatenate(node <T> *q){           // p=first , q=second
    node <T> *p=first;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}
template <class T>
void LinkedList <T> :: merge(node <T> *fir,node <T>*sec){
    node <T> *third=NULL;
    node <T> *last=NULL;
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
    // node <T>* q=NULL,*p=k.first;
    // k.recursiveReverse(q,p);
    // k.display();


    int arrOne[4]={2,8,10,16};
    int arrSecond[4]={4,7,12,14};
    
    LinkedList<int> one(arrOne,4);
    LinkedList<int> two(arrSecond,4);
    // one.conacatenate(two.first);
    // one.display();

    one.merge(one.first,two.first);
    one.display(); 




    

    return 0;
}