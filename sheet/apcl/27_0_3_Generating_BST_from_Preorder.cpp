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
node * createBSTPre(int pre[],int n){
    stack <node *> stk;
    int i=0;
    node *p;node *t;
    node *root=new node;
    root->data=pre[i++];
    root->lchild=root->rchild=NULL;
    p=root;
    stk.push(p);
    while(i<n){
        if(pre[i]<p->data){
            t=new node;
            t->data=pre[i++];
            t->lchild=t->rchild=NULL;
            stk.push(t);
            p->lchild=t;
            p=t;
        }
        else { 
            if(pre[i]<p->data and (stk.top()->data>pre[i] or stk.empty())) {
                t=new node;
                t->data=pre[i++];
                t->lchild=t->rchild=NULL;
                p=t;
            }
            else{
                if(!stk.empty()){

                p=stk.top();
                stk.pop();
                }
            } 
        }
    }
    return root;
}
void levelorder (node *r){
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
// void level_order(node *r){
//     stack <node *> stk;
//     node *p=r;
//     cout<<p->data<<" ";
//     stk.push(p);
//     while(!stk.empty()){
//         p=stk.top();
//         stk.pop();
//         if(p->lchild){
//             cout<<p->lchild->data<<" ";
//             stk.push(p->lchild);
//         }
//         if(p->rchild){
//             cout<<p->rchild->data<<" ";
//             stk.push(p->rchild);
//         }
//     }
// }
int main(){
    int preorder[8]={30,20,10,15,25,40,50,45};
    node *root =createBSTPre(preorder,8);
    levelorder(root);
    delete root;
    return 0;
}