#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Stack{
    struct Node* top;
};
void init(struct Stack *st){
    st->top=NULL;
}
void push(struct Stack * st,int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=st->top;
    st->top=newnode;
}
int pop(struct Stack *st){
    if(st->top==NULL) return -1;
    if(st->top->next==NULL){
        int temp=st->top->data;
        st->top=NULL;
        return temp;
    }
    struct Node* t=st->top;
    int x=t->data;
    st->top=t->next;
    free(t);
    return x;
}
void display(struct Node *top){
    if(top==NULL) return;
    printf("%d ",top->data);
    display(top->next);
}
int main(){
    struct Stack st;
    init(&st);
    push(&st,1);
    push(&st,2);
    push(&st,3);
    push(&st,4);
    push(&st,5);
    display(st.top);
    pop(&st);
    printf("\n");
    display(st.top);
    return 0;
}