#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
};

class Stack{
    private:
        node *Top;
    public:
        Stack(){ Top =NULL;}
        
        void push(int x);
        int pop();
        void display();
};

void Stack :: push(int x){
    node *t=new node;
    if(t==NULL){
        cout<<"Stack is Full!"<<endl;
    }
    else{
        t->data=x;
        t->next=Top;
        Top=t;
    }
} 

int Stack ::pop(){
    int x=-1;
    if(Top==NULL){
        cout<<"Stack is Empty "<<endl;
    }
    else{
        node *p=Top;
        Top=Top->next;
        x=p->data;
        delete p;
    }
    return x;
}

void Stack :: display(){
    node *p=Top;
    while(p){
        cout<<p->data << " "; 
        p=p->next;
    }
    cout<<endl;
}

int main(){
    Stack st;
    st.push(1);
    st.push(8);
    st.push(5);
    st.display();
    cout<<st.pop()<<endl;
    st.display();
    return 0;
}