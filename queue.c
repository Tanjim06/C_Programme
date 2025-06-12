#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
int data;
struct Node* next;
};
struct queue{
struct Node* front;
struct Node* rear;
};
void initqueue(struct queue* q){
q->front=q->rear=NULL;
}
void enqueue(struct queue* q,int x){
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->next=NULL;
printf("inserting %d in the queue\n",x);
if(q->front==NULL && q->rear==NULL){
    q->front=q->rear=newnode;
    return;
}
q->rear->next=newnode;
q->rear=newnode;
}
int dequeue(struct queue* q){
if(q->front==NULL) return -1;
if(q->front==q->rear){
    q->front=q->rear=NULL;
    return -1;
}
 struct Node* temp=q->front;
 int x=q->front->data;
 printf("%d deleting from queue\n",x);
 q->front=q->front->next;
 free(temp);
 return x;
}
void display(struct queue* q){
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
return 0;
}
