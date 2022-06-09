// https://drive.google.com/drive/folders/1kQKuaYa2YZ_40Z6Gcu2InePn9LG0J7FB


#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next=NULL;
};

void display(node * p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void display2(node* p){
    if(!p){
        return;
    }
    cout<<p->data<<" ";
    display(p->next);

}

int count(node *p){
    
    if(!p){
        return 0;
    }
    return count(p->next) +1;
}

int sum(node *p){
    int sum=0;
    while(p){
        sum+=p->data;
        p=p->next;
    }

    return sum;
}

int maximum(node* p){
    int maximum=0;
    while(p){
        if(p->data > maximum)
            maximum=p->data;
        p=p->next;
    }

    return maximum;
}

int linear_search(node * p,int key,int index){
    if(!p){
        return -1;
    }
    if(p->data==key){
        return index;
    }
    
    linear_search(p->next,key,index+1);
}


void create(int arr[],int n){
    int i;
    node *t,*last;
    node *first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

    // display(first);

    // display2(first);

    // cout<<count(first)<<endl;

    // cout<<sum(first)<<endl;

    // cout<<maximum(first)<<endl;

    // cout<<linear_search(first,10,0);
    
}

int main(){
    int arr[10]={1,2,8,4,5};
    create(arr,5);
    return 0;
}












// class LinkedList{
//     private:
//         node* first;
//     public:
//         LinkedList(){           //Constructor
//             first=NULL;
//         }
//         LinkedList(int arr[],int n);
//         ~LinkedList();

//         void Display();
//         void insert(int index,int x);
//         int delete(int index);
//         int length();
// };