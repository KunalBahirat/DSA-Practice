#include <iostream>
using namespace std;
struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        if(head==NULL or head->next==NULL) return head;
        node  *p=head,*q=NULL,*r=NULL;
        int initK=k;
        while(p and k>0){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            k--;
        }
        node *nextNode=reverse(p,initK);
        head->next=nextNode;
        head=q;
        return head;
    }
};
void print(node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next; 
    }
    cout<<"\n";
}
int main(){
    // head=new node(1);
    // head->next=new node(2);
    // head->next->next=new node(2);
    // head->next->next->next=new node(4);
    // head->next->next->next->next=new node(5);
    // head->next->next->next->next->next=new node(6);
    // head->next->next->next->next->next->next=new node(7);
    // head->next->next->next->next->next->next->next=new node(8);
    // head->next->next->next->next->next->next->next->next=NULL;
    head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
    // head->next->next->next->next->next=new node(6);
    // head->next->next->next->next->next->next=new node(7);
    // head->next->next->next->next->next->next->next=new node(8);
    head->next->next->next->next->next=NULL;
    print(head);
    Solution s;
    node *root=s.reverse(head,3);
    print(root);
    return 0;
}