#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define maxsize 100
//array implementation
/*
struct stack{
    int arr[maxsize];
    int top;
};
void initstack(struct stack *st){
    st->top=-1;
}
void push(struct stack *st,int x){
    if(st->top==maxsize-1){
        printf("Stack Overflow");
    }
    st->arr[++st->top]=x;
}
int pop(struct stack *st){
    if(st->top==-1){
        printf("Stack Underflow");
        return -1;
    }
    int x=st->arr[st->top];
    st->top--;
    return x;
}
int peek(struct stack *st){
    return st->arr[st->top];
}
void display(struct stack *st){
    for(int i=st->top;i>=0;i--){
        printf("%d ",st->arr[i]);
    }
}
bool isFull(struct stack *st){
    if(st->top==maxsize-1) return true;
    return false;
}
bool isEmpty(struct stack *st){
    if(st->top==-1) return true;
    return false;
}
*/
//Linkedlist implementation
struct Node{
    int data;
    struct Node* next;
};
struct llstack{
    struct Node* head;
};
void instack(struct llstack *st1){
    st1->head=NULL;
}
void push(struct llstack *st1,int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    if(!newnode){
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data=x;
    newnode->next=st1->head;
    st1->head=newnode;
}
int pop(struct llstack *st1){
    if(st1->head==NULL){
        printf("Stack Underflow\n");
        return -1;
    }
    struct Node* temp;
    temp=st1->head;
    int x=temp->data;
    st1->head=temp->next;
    free(temp);
    return x;
}
int peek(struct llstack *st1){
    return st1->head->data;
}
bool isEmpty(struct llstack *st1){
    return (st1->head==NULL);
}
bool isFull(struct llstack *st1){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL){
        return true;
    }
    free(temp);
    return false;
}
void display(struct Node *head){
    if(head==NULL) return;
    printf("%d ",head->data);
    display(head->next);
}
int main(){
    struct llstack st1;
    instack(&st1);
    push(&st1,1);
    push(&st1,2);
    pop(&st1);
    push(&st1,3);
    push(&st1,4);
    pop(&st1);
    display(st1.head);
    return 0;
}