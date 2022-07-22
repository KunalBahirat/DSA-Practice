#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(){next=NULL;}
};
class HashTable{
    int size;
    Node **arr;
    public:
        HashTable(int n){
            size=n;
            arr=new Node*[size];
            for(int i=0;i<n;i++){
                *(arr+i)=NULL;
            }
        }

        int hash(int n){
            return n%10;
        }
        void insertHashValue(int val){
            int index=hash(val);
            Node *t=new Node;
            t->data=val;
            if(*(arr+index)==NULL){
                *(arr+index)=t;
                t->next=NULL;
                return;
            }
            Node *i=*(arr+index);
            if(i->data > val){
                *(arr+index)=t;
                t->next=i;
                return;
            }
            Node * j=NULL;
            while(i->data <val and i->next!=NULL){
                j=i;i=i->next;
            }
            if(i->next==NULL){i->next=t;t->next=NULL;return;}
            j->next=t;
            t->next=i;
            return;
        }
        void display(){
            for(int j=0;j<size;j++){
                Node *temp=*(arr+j);
                cout<<j<<" -> ";
                while(temp!=NULL){
                    cout<<temp->data<<" ";
                    temp=temp->next;
                }
                cout<<endl;       
            }
        }
        bool search_hash_value(int val){
            Node *x=*(arr+hash(val));
            if(x==NULL) return false;
            while(x->data <val and x!=NULL){
                x=x->next;
            }
            if(x->data==val) return true;
            else return false;
        }
        void isPresent(int val){
            bool ans=search_hash_value(val);
            if(ans){
                cout<<val<<" is present in array"<<endl;
            }
            else 
                cout<<val<<" is not present in array"<<endl;
        }
        void deleteValue(int val){
            int index=hash(val);
            Node *ptr=*(arr+index);Node *j=NULL;
            if(ptr==NULL) return;
            if(ptr->next==NULL){
                delete ptr;
                *(arr+index)=NULL;
                cout<<"Value deleted suucessfully"<<endl;
                return;
            }
            while(ptr->data < val and ptr!=NULL) {j=ptr ;ptr=ptr->next;}
            if(ptr->data == val ){
                j->next=ptr->next;
                delete ptr;
                cout<<"Value deleted suucessfully"<<endl;
                return;
            }
            j->next=ptr;
            delete ptr;
            return;
        }
};
int main(){
    int arr[7]={10,14,19,28,9,4,44};
    HashTable h(10);
    for(int i=0;i<7;i++){
        h.insertHashValue(arr[i]);
    }
    h.display();cout<<endl;
    cout<<"Enter value too search in array ";
    int x;
    // cin>>x;
    // while(x!=-1){
    //     h.isPresent(x);
    //     cout<<"Enter value too search in array ";
    //     cin>>x;
    // }
    cout<<"Enter val to delete ";
    cin>>x;
    while(x!=-1){
        h.deleteValue(x);
        cout<<"Enter val to delete ";
        cin>>x;
    }
     
    h.display();


    //  HashTable h(10);
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int temp;
    //     cout<<"Enter "<<i+1<<"th value : ";
    //     cin>>temp;
    //     h.insertHashValue(temp);
    // }
    // h.display();

    return 0;
}