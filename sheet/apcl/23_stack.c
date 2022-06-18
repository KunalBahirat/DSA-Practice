 #include <stdlib.h>
#include <stdio.h>

struct stack{
    int size;
    int Top;
    int *S;
};

void create(struct stack *st){
    st->Top=-1;
    printf("Enter size ");
    scanf("%d" , st->size);
    st->S=(int *)malloc(st->size*sizeof(int));
}

void push(struct stack *st,int x){
    if(st->Top==st->size-1){
        printf("Stack Overflow ");
    }
    else{
        st->Top++;
        st->S[st->Top]=x;
    }
}

void display(struct stack *st){
    for(int i=st->Top;i>=0;i--){
        printf("%d ",st->S[i]);
    }
    printf("\n");
}

int pop(struct stack *st){
    int x=-1;
    if(st->Top==-1){
        printf("\nStack Underflow ");
    }
    else{
        x=st->Top;
        st->Top--;
    }
    return x;
}

int peek(struct stack st,int pos){
    int x=-1;
    if((st.Top-pos+1)<0){
        printf("Invalid Position");
    }
    else{
        x=st.S[st.Top-pos+1];
        return x;
    }
    return -1;
}

void stackTop(struct stack st){
    if(st.Top==-1){
        printf("Stack is Empty");
    }
    else{
        printf("Element at top is =%d",st.S[st.Top]); 
    }
}

int isEmpty(struct stack st){
    if(st.Top==-1){
        return 1;
    }
    else return 0;
}

int isFull(struct stack st){
    if(st.Top==st.size-1){
        return 1;
    }
    return 0;
}

int main(){
    struct stack st;
    create(&st);

    push(&st,3);
    push(&st,4);
    push(&st,5);


    display(&st);
    printf("Top=%d",st.Top);
    printf("\nelement at pos 2 is=%d",peek(st,2));

    pop(&st);
    printf("\n");       
    display(&st); 
    stackTop(st);  
    printf("\n");       
    printf("is empty%d",isEmpty(st));
    printf("\n");       
    printf("isfull%d",isFull(st));
    return 0;

}