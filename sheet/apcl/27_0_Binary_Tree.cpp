#include "bits/stdc++.h"
#include <iostream>
using namespace std;
class node{
    private:
        int data;
        node *rChild;
        node *lChild;
    public:
        node(){
            rChild=NULL;
            lChild=NULL;
        }
};
int main(){
    //Binary Tree
    node *p,*t;
    queue <int> Q;
    int n;int value;
    cout<<"Enter number of elements ";
    cin>>n;
    cout<<"Enter root: ";
    cin>>value;n--;
    p->data=value;
    p->lChild=p->rChild=NULL;
    Q.push(value);
    while(!Q.empty()){
        
    }
    return 0;
}