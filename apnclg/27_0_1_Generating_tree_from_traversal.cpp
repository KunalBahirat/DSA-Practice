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
    int front;
    int rear;
    node **q;
    public:
        Queue(int size){
            this->size=size;
            front=rear=-1;
            q=new node*[this->size];
        }
        ~Queue(){delete q;}
        void enqueue(node* address){
            if(rear==size-1) cout<<"queue is Full"<<endl;
            else {
                rear++;
                q[rear]=address;
            }
        }
        node * dequeue(){
            node *x=NULL;
            if(front==rear) {cout<<"queue is empty"<<endl; }
            else{
                x=q[front+1];
                front++;
            }
            return x;
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
        void createTree(){
            node *p;
            Queue q(10);
            cout<<"Welcome!"<<endl;
            cout<<"Enter value of root ";
            int data;
            cin>>data;
            root=new node;
            root->data=data;
            root->lchild=root->rchild=NULL;
            q.enqueue(root);
            while(!q.isEmpty()){
                p=q.dequeue();
                cout<<"Enter value of left child of "<<p->data<<" ";
                cin>>data;
                if(data!=-1){
                    node *t=new node;
                    t->data=data;
                    t->lchild=t->rchild=NULL;
                    p->lchild=t;
                    q.enqueue(t);
                }
                cout<<"Enter value of right child of "<<p->data<<" ";
                cin>>data;
                
                if(data!=-1){
                    node *t=new node;
                    t->data=data;
                    t->lchild=t->rchild=NULL;
                    p->rchild=t;
                    q.enqueue(t);
                }

            }
            
        }

        void preOrder(node *r){
            if(r)
            {
                cout<<r->data<<" ";
                preOrder(r->lchild);
                preOrder(r->rchild);
            }
        }
        void postOrder(node *r){
            if(r)
            {
                preOrder(r->lchild);
                preOrder(r->rchild);
                cout<<r->data<<" ";
            }
        }
        void inOrder(node *r){
            if(r)
            {
                preOrder(r->lchild);
                cout<<r->data<<" ";
                preOrder(r->rchild);
            }
        }
        int count(node *r){
            int x,y;
            if(r){
                x=count(r->lchild);
                y=count(r->rchild);
                return x+y+1;
            }
            return 0;
        }
        
        int countDegree2(node *r){
            int x,y;
            if(r){
                x=countDegree2(r->lchild);
                y=countDegree2(r->rchild);
                if(r->lchild and r->rchild) return x+y+1;
                return x+y;
            }
            return 0;
        }
        int count_leaf(node *r){
            int x,y;
            if(r){
                x=count_leaf(r->lchild);
                y=count_leaf(r->rchild);
                if(r->lchild==NULL and r->rchild==NULL) return x+y+1;
                return x+y;
            }
            return 0;
        }
        int count_degree_1(node *r){
            int x,y;
            if(r){
                x=count_degree_1(r->lchild);
                y=count_degree_1(r->rchild);
                if((r->lchild==NULL and r->rchild!=NULL) or (r->lchild!=NULL and r->rchild==NULL)) return x+y+1;
                return x+y;
            }
            return 0;
        }

};

int main(){
    Tree t;
    t.createTree();
    t.preOrder(t.root);cout<<endl;
    t.inOrder(t.root);cout<<endl;
    t.postOrder(t.root);cout<<endl;
    cout<<"count of nodes with degree 2 ="<<t.countDegree2(t.root);cout<<endl;
    cout<<"count of nodes with degree 0="<<t.count_leaf(t.root);cout<<endl;
    cout<<"count of nodes with degree 1 ="<<t.count_degree_1(t.root);cout<<endl;
    
    return 0;
}


