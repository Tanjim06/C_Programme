#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct queue{
    struct Node* front;
    struct Node* rear;
};
void initqueue(struct queue* q){
    q->front=NULL;
    q->rear=NULL;
}
void enqueue(struct queue* q,int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;
    if(q->front==NULL && q->rear==NULL){
        q->front=newnode;
        q->rear=newnode;
        return;
    }
    q->rear->next=newnode;
    q->rear=newnode;
}
void dequeue(struct queue* q){
    if(q->front==NULL && q->rear==NULL) return;
    if(q->front==q->rear){
        struct Node* temp=q->front;
        q->front=q->rear=NULL;
        free(temp);
        return;
    }
    struct Node* temp=q->front;
    q->front=q->front->next;
    free(temp);
}
void display(struct queue *q){
    if(q->front==NULL && q->rear==NULL) return;
    struct Node* temp=q->front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    initqueue(q);
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    display(q);
    dequeue(q);
    display(q);
    dequeue(q);
    display(q);

    return 0;
}