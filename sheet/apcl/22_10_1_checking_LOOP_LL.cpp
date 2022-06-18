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
        bool checkLoop();
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
    // last->next = (head->next)->next;        // for arr1

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

bool LinkedList :: checkLoop(){
    node * p,*q;
    p=head;q=head;
    do{
        p=p->next;
        q=q->next;
        if(q!=NULL){
            q=q->next;
        }
        else{
            q=NULL;
        }
    }while(p!=q);

    return (p==q) ? true : false;
}

int main(){
    int n1=5;
    int arr1[n1]={8,3,4,7,9};
    int n2=4;
    int arr2[n2]={1,2,3,4};

    LinkedList k1(arr1,n1);
    k1.display();
    cout<<k1.checkLoop()<<endl;
    return 0;
}