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

        void display(){
            node *p=first;
            while(p){
                cout<<p->data<<" ";
                p=p->next;
            }
        }
        void rmDuplicates();
};

LinkedList :: LinkedList(int arr[],int n){
    int i;
    node *t,*last;
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

LinkedList :: ~LinkedList (){
    node *p=first;
    while(p){
        first=first->next;
        delete p;
        p=first;
    }

}

int main(){
    int n=6;
    int arr[n]={3,5,5,8,8,8};
    LinkedList k(arr,n);
    k.display();
    k.rmDuplicates();    
    cout<<endl;
    k.display();
    return 0;
}