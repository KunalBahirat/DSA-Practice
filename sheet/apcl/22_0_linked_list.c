#include <stdlib.h>
#include <stdio.h>

// *******************************  C ******************
struct node{
    int data;
    struct node* next;
}*first=NULL;


void display(struct node* p){
    while(p!=NULL){ 
        printf("%d ",p->data);
        p=p->next;
    }
}

void display2(struct node* p){
    if(!p){
        return;
    }
    printf("%d ",p->data);
    display2(p->next);
}

int count(struct node* p){
    int count=0;
    while(p){
        count++;
        p=p->next;
    }

    return count;
}

int sum(struct node* p){
    if(p==NULL){
        return 0;
    }
    return sum(p->next) + p->data;
}

int count2(struct node* p){
    if(!p){
        return 0;
    }
    return count2(p->next) +1;
}

int maximum(struct node* p){
    int maximum=0;
    while(p){
        if(p->data > maximum)
            maximum=p->data;
        p=p->next;
    }

    return maximum;
}

int maximum2(struct node* p){
    if(!p){
        return 0;
    }
    int maxi=maximum2(p->next);
    if(p->data > maxi)
        maxi=p->data;
    return maxi;
}

struct node * linearSearch(struct node* p,int n){
    int index=0;
    while(p){
        if(p->data == n){
            return p;
        }
        index++;
        p=p->next;
    }
    return NULL;
}

int linearSearch2(struct node* p,int k,int index){
    if(!p){
        return -1;
    }
    if(p->data == k){
        return index;
    }
    linearSearch2(p->next,k,index+1);
}

void create(int arr[], int n){
    int i;
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=arr[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

    // display(first);

    // display2(first);

    // printf("\n");
    // printf("count = %d",count2(first) );

    // printf("\n");
    // printf("Sum = %d", sum(first));

    // printf("\nMaximum= %d",maximum2(first));

    // printf("Index= %d",(linearSearch2(first ,10,0))); 

    // printf("Address is %d",linearSearch(first,5));

}

int main(){
    struct node* temp;
    int arr[]={1,2,3,8,5};
    create(arr,5);
    temp=linearSearch(first,10);
    if(temp){
        printf("Key is found!");
    }
    else{
        printf("Key is not found!");
    }
    return 0;
}