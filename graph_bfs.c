#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
    int data;
    struct Node* next;
};
struct llqueue{
    struct Node *head;
    struct Node *front;
    struct Node *rear;
};
void inqueue(struct llqueue *q){
    q->head=NULL;
    q->rear=NULL;
    q->front=NULL;
}
void llenqueue(struct llqueue *q,int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL){
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data=x;
    newnode->next=NULL;
    if(q->rear==NULL){
        q->front=q->rear=newnode;
        return;
    }
    q->rear->next=newnode;
    q->rear=newnode;
}
int lldequeue(struct llqueue *q){
    if(q->front==NULL){
        printf("queue is empty\n");
        return -1;
    }
    struct Node* temp=q->front;
    int x=temp->data;
    q->front=q->front->next;
    if(q->front==NULL){
        q->rear=NULL;
    }
    free(temp);
    return x;
}
void lldisplay(struct llqueue *q){
    if(q->front==NULL){
        return;
    }
    struct Node* temp=q->front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){




    return 0;
}
