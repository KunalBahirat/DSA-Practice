#include <iostream>
using namespace std;

// 10 20 30    \0
class Stack{
    public:
        int size;
        int *s;
        int top;

        Stack(){
            size=10;
            s=new int[10];
            top=-1;
        }
        Stack(int size){
            this->size=size;
            top=-1;
            s=new int[size];
        }
        void push(int x);
        void Display();
        int pop();
        void peek(int);
        int stackTop();
        bool isFull();
        bool isEmpty();
};

void Stack :: push(int x){
    if(top==size-1){
        cout<<"Stack overflow"<<endl;
    }
    else{
        top++;
        s[top]=x;
    }
}

void Stack :: Display(){
    for(int i=top;i>=0;i--){
        cout<<s[i]<<" ";
    }    
    cout<<endl;
}

int Stack :: pop(){
    int x=-1;
    if(top==-1){
        cout<<"stack underflow" <<endl;
    }
    else{
        x=s[top];
        top--;
    }
    return x;
}

void Stack :: peek(int pos){            // index = top-pos +1
    if(top-pos+1 < 0 || pos<1){
       cout<<"Invalid Position"<<endl; 
    }
    else{
        cout<<s[top-pos+1]<<endl;
    }
}
int Stack :: stackTop(){
    // int x=-1;
    // if(top==-1){
    //     cout<<"Stack is empty"<<endl;
    // }
    // else{
    //     x=s[top];
    // }
    // return x;

    return (top==-1) ? -1 : s[top];
}

bool Stack :: isEmpty(){
    return top==-1;
}

bool Stack :: isFull(){
    if(top==size-1){
        return true;
    }
    return false;
}




int main(){
    int n=5;
    int arr[n]={10,20,30,40,50};
    Stack st;
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    st.Display();
    cout<<st.pop()<<endl;
    st.Display();
    st.peek(3);
    
    cout<<"Element at top is= ";
    cout<<st.stackTop();


    return 0;
}