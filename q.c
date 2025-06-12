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
    printf("Inserting %d in the queue\n",x);
    if(q->front==NULL){
        q->front=newnode;
        q->rear=newnode;
        return;
    }
   
    q->rear->next=newnode;
    q->rear=newnode;
}
int dequeue(struct queue* q){
    if(q->front==NULL){
        printf("queue is already empty\n");
        return;
    }
    struct Node* temp=q->front;
    printf("Removing %d from queue\n",temp->data);
    if(q->front==q->rear){
        q->front=NULL;
        q->rear=NULL;
    }
    int x=temp->data;
    q->front=q->front->next;
    free(temp);
    return x;
}
int peek(struct queue* q){
    return q->front->data;
}
void display(struct queue *q){
    struct Node* temp=q->front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    struct queue* q=(struct queue*)malloc(sizeof(struct queue));
    initqueue(q);
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    display(q);
    dequeue(q);
    display(q);
    printf("%d",peek(q));
    return 0;
}