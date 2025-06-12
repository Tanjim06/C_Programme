#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void insert(struct Node** head,int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;
    if(*head==NULL){
        *head=newnode;
        return;
    }
    struct Node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void deleteBeg(struct Node** head){
    if(*head==NULL) return;
    else if((*head)->next==NULL){
        struct Node* temp=*head;
        *head=NULL;
        free(temp);
    }
    else{
        struct Node* temp=*head;
        *head=(*head)->next;
        free(temp);
    }
}
void display(struct Node* head){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
struct stack{
    struct Node* top;
};
void initstack(struct stack *st){
    st->top=NULL;
}
void push(struct stack* st,int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=st->top;
    st->top=newnode;
    
}
int pop(struct stack *st){
    if(st->top==NULL) return -1;
    struct Node* temp=st->top;
    int x=temp->data;
    st->top=st->top->next;
    free(temp);
    return x;
}
void disstack(struct stack* st){
    struct Node* temp=st->top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    struct Node* head=NULL;
    struct stack* st=(struct stack*)malloc(sizeof(struct stack));
    initstack(st);
    push(st,1);
    push(st,2);
    push(st,3);
    push(st,4);
    push(st,5);
    disstack(st);
    pop(st);
    disstack(st);

    return 0;
}