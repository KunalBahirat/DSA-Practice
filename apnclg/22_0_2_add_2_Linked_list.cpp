#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
    struct Node *reverseLL(struct Node *head)
    {
        Node *r=NULL,*q=NULL,*p=head;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    //Function to add two numbers represented by linked list.
    struct Node * add(struct Node*first,struct Node*second){
        Node *ans=new Node(-1);
        Node *p=ans;
        int carry=0;
        while(first and second){
            int sum=first->data +second->data + carry;
            int digit=sum%10;
            carry=sum/10;
            Node *t=new Node(digit);
            p->next=t;
            t->next=NULL;
            p=t;
            first=first->next;
            second=second->next;
        }
        while(first){
            int sum=first->data + carry;
            int digit=sum%10;
            carry=sum/10;
            Node *t=new Node(digit);
            p->next=t;
            t->next=NULL;
            p=t;
            first=first->next;
        }
        while(second){
            int sum=second->data + carry;
            int digit=sum%10;
            carry=sum/10;
            Node *t=new Node(digit);
            p->next=t;
            t->next=NULL;
            p=t;
            second=second->next;
        }
        if(carry){
            Node *t=new Node(carry);
            p->next=t;
            t->next=NULL;
            p=t;
        }
        // p->next=NULL;
        return ans->next;
        
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverseLL(first);
        second=reverseLL(second);
        Node * ans=add(first,second);
        
        return reverseLL(ans);
    }
    void print(struct Node *t){
        while(t){
            cout<<t->data<<" ";
            t=t->next;
        }
    }
int main(){
     Node *first=new Node(5);
     first->next=new Node(4);
     first->next->next=NULL;
     Node *second=new Node(3);
     second->next=new Node(4);
     second->next->next=new Node(5);
     second->next->next->next=NULL;
     print(addTwoLists(first,second));
    return 0;
}