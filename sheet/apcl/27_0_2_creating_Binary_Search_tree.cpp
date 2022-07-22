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
class BST{
    public:
        node *root;
        BST(){
            root=NULL;
        }
        node * insertBST(node *r,int key){
                node *t=NULL;node *p;
                if(r==NULL){
                    p=new node;
                    p->data=key;
                    p->lchild=p->rchild=NULL;
                    return p;
                }
                while(r){
                    t=r;      // tail  pointer
                    if(r->data==key) return NULL;
                    if(key<r->data){
                        r=r->lchild;
                    }
                    else r=r->rchild;
                }
                p=new node;
                p->data=key;
                p->lchild=p->rchild=NULL;
                if(p->data<t->data){
                    t->lchild=p;
                }
                else t->rchild=p;
                return p;
        };
        node * RinsertBST(node *r,int key){
            if(r==NULL){
                node *t=new node;
                t->data=key;
                t->lchild=t->rchild=NULL;
                return t;
            }
            if(key<r->data){
                r->lchild=RinsertBST(r->lchild,key);
            }
            else if(key>r->data) 
                r->rchild=RinsertBST(r->rchild,key);
            return r;
        }
        
        node * searchBST(node *r,int key){
            while(r){
                if(r->data==key){
                    return r;
                }
                else if(key<r->data){
                    r=r->lchild;
                }
                else r=r->rchild;
            }
            return NULL;
        }
        node * RsearchBST(node *r,int key){
            if(r==NULL){
                return NULL;
            }
            else if(key<r->data){
                return RsearchBST(r->lchild,key);
            }
            else return RsearchBST(r->rchild,key); 
        }
        node *deleteNode(node *p,int key);
        
};

void in_order(node *r){
    if(r){
        in_order(r->lchild);
        cout<<r->data<<" ";
        in_order(r->rchild);
    }
}
void level_order(node *r){
    Queue q(100);
    q.enqueue(r);
    if(r)
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
    BST myBST;
    myBST.root=myBST.insertBST(myBST.root,30);
    myBST.insertBST(myBST.root,20);
    myBST.insertBST(myBST.root,40);
    myBST.insertBST(myBST.root,10);
    myBST.insertBST(myBST.root,25);
    myBST.insertBST(myBST.root,35);
    myBST.insertBST(myBST.root,50);

    myBST.RinsertBST(myBST.root,36);
   
    level_order(myBST.root);
cout<<endl;
    node *newNode;
    node *newNode2;
    newNode =myBST.searchBST(myBST.root,40);
    if(newNode) cout<<"element 40 is found!"<<endl;
    else cout<<"NOt found"<<endl;
    newNode2=myBST.RinsertBST(myBST.root,10);
cout<<"INORDER"<<endl;
in_order(myBST.root);
cout<<endl;
myBST.insertBST(myBST.root,37);
level_order(myBST.root);
cout<<endl;
cout<<"INORDER"<<endl;
in_order(myBST.root);
cout<<endl;
cout<<"Level"<<endl;
level_order(newNode2);



    // BST k;
    // k.root=k.RinsertBST(k.root,30);
    // k.RinsertBST(k.root,20);
    // k.RinsertBST(k.root,40);
    // k.RinsertBST(k.root,10);
    // k.RinsertBST(k.root,120);
    // k.RinsertBST(k.root,25);
    // k.RinsertBST(k.root,35);
    // k.RinsertBST(k.root,50);
    // // k.RinsertBST(k.root,50);
    // in_order(k.root);
    // cout<<endl;
    // level_order(k.root);


    return 0;
}