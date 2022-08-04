#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *lchild;
    node *rchild;
};
class Queue{
    int size;
    int front,rear;
    node **Q;
    public:
        Queue(int size){
            this->size=size;
            front=rear=-1;
            Q=new node*[this->size];
        }
        ~Queue(){
            delete Q;
        }
        void enqueue(node *  num){
            if((rear+1)%size==front) cout<<"queue is full"<<endl;
            else {
                rear++;
                Q[rear]=num;
            }
        };
        node* dequeue(){
            node * x=NULL;
            if(front==rear) cout<<"queue is empty"<<endl;
            else{
                x=Q[front+1];
                front=(front+1)%size;
            }
            return x;
        }
        void display(){
            for(int i=front+1;i<=rear;i++){
                cout<<Q[i]<<" ";
            }
            cout<<endl;
        }
        bool isEmpty(){
            return front==rear;
        }
};
class Tree{
    public:
    node *root;
        Tree(){
            root=NULL;
        }
        void createTree();
        void preorder(node *r);
        void inorder(node *r);
        void postorder(node *r);
        void levelorder(node *r);
};
void Tree :: createTree (){
    node *t,*p;
    Queue k(100);
    int data;
    cout<<"Enter Root Value : ";
    cin>>data;
    root=new node;
    root->data=data;
    root->lchild=root->rchild=NULL;
    p=root;
    k.enqueue(p);
    while(!k.isEmpty()){
        p=k.dequeue();
        cout<<"Enter left child of "<<p->data<<" ";
        cin>>data;
        if(data!=-1){
            t=new node;
            t->data=data;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            k.enqueue(t);
        }
        cout<<"Enter Right Child of "<<p->data<<" ";
        cin>>data;
        if(data!=-1){
            t=new node;
            t->data=data;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            k.enqueue(t);
        }
        
    }

}

void Tree :: preorder(node *r){
    if(r){
        cout<<r->data<<" ";
        preorder(r->lchild);
        preorder(r->rchild);
    }
}
void Tree :: inorder(node *r){
    if(r){
        inorder(r->lchild);
        cout<<r->data<<" ";
        inorder(r->rchild);
    }
}
void Tree :: postorder(node *r){
    if(r){
        inorder(r->lchild);
        inorder(r->rchild);
        cout<<r->data<<" ";
    }
}
void Tree :: levelorder (node *r){
    Queue q(100);
    q.enqueue(r);
    cout<<r->data<<" ";
    while(!q.isEmpty()){
        node *p=q.dequeue();
        if(p->lchild){
            cout<<p->lchild->data<<" ";
            q.enqueue(p->lchild);
        }
        if(p->rchild){
            cout<<p->rchild->data<<" ";
            q.enqueue(p->rchild);

        }
    }
} 

int main(){
    Tree t;
    t.createTree();
    // cout<<"PreOrder : \t";
    // t.preorder(t.root);
    // cout<<endl;
    // cout<<"PostOrder : \t";
    // t.postorder(t.root);
    // cout<<endl;
    // cout<<"InOrder : \t";
    // t.inorder(t.root);
    // cout<<endl;
    cout<<"LevelOrder : \t";
    t.levelorder(t.root);
    cout<<endl;
    return 0;
}