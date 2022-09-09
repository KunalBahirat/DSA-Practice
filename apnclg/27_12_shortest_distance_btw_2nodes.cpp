#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left;
        Node *right;
};
class Queue{
    Node **q;
    int size;
    int rear;
    int front;
    public:
        Queue(int n){
            size=n;
            rear=front=0;
            q=new Node *[size];
        }
        ~Queue(){
            delete []q;
            q=NULL;
        }
        void enqueue(Node *p){
            rear++;
            if(rear<size) {
                q[rear]=p;
            }
            else{
                cout<<"queue is full"<<endl;
                return;
            }
        }
        Node * dequeue(){
            if(front==rear) {
                cout<<"queue is empty"<<endl;
                return NULL;
            }
            front++;
            return q[front];
        }
        bool is_empty(){
            return front==rear;
        }

};
class Tree{
    public:
    Node *root;
        Tree(){
            root=NULL;
        }
        void create_tree(){
            Queue q(100);
            int data;
            // cout<<"Enter data of root ";
            cin>>data;
            root=new Node;
            root->data=data;
            root->left=root->right=NULL;
            q.enqueue(root);
            while(!q.is_empty()){
                Node *p=q.dequeue();
                // cout<<"Enter left child of "<<p->data<<" ";
                cin>>data;
                if(data!=-1){
                    Node *temp=new Node;
                    temp->data=data;
                    temp->left=temp->right=NULL;
                    p->left=temp;
                    q.enqueue(temp);
                }
                // cout<<"Enter right child of "<<p->data<<" ";
                cin>>data;
                if(data!=-1){
                    Node *temp=new Node;
                    temp->data=data;
                    temp->left=temp->right=NULL;
                    p->right=temp;
                    q.enqueue(temp);
                }
            }
        }
        void preorder(Node *root){
            if(root){
                cout<<root->data<<" ";
                preorder(root->left);
                preorder(root->right);
            }
        }
        Node *find_node(Node *root,int val){
            if(!root) return NULL;
            if(root->data==val) return root;
            Node *left=find_node(root->left,val) ;
            if(left) return left;
            return find_node(root->right,val);

        }

};
void postorder(Node *root){
            if(root){
                postorder(root->left);
                postorder(root->right);
                cout<<root->data<<" ";
            }
}
int distancek(Node *root,int val,int dist){
    if(root==NULL) return -1;
    if(root->data==val) return dist;
    int ansleft=distancek(root->left,val,dist+1);
    if(ansleft!=-1) return ansleft;
    return distancek(root->right,val,dist+1);
}
Node *lowest_common_ancestor(Node *root,Node *p,Node *q){
    if(!root) return NULL;
    if(root->data==p->data or root->data==q->data) return root;
    Node *left=lowest_common_ancestor(root->left,p,q);
    Node *right=lowest_common_ancestor(root->right,p,q);
    if(left==NULL) return right;
    if(right==NULL) return left;
    return root;
}

int distance_btw_2nodes(Node *root,Node *p,Node *q){
    Node *lca=lowest_common_ancestor(root,p,q);
    int dist_p=distancek(lca,p->data,0);
    int dist_q=distancek(lca,q->data,0);
    return dist_p+dist_q;

}
int main(){
    Tree t;
    t.create_tree();
    t.preorder(t.root);
    cout<<endl<<"ans= "; 
    // cout<<t.distance(t.root,5,0);
    Node *three=t.find_node(t.root,6);Node *four=t.find_node(t.root,4);
    cout<<distance_btw_2nodes(t.root,three,four);

    
    return 0;
}

