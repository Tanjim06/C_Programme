#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node* front=NULL;
struct Node* rear=NULL;

void enqueue(int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;
    printf("Inserting %d in the queue\n",newnode->data);
    if(front==NULL && rear==NULL){
        front=rear=newnode;
        return;
    }
    rear->next=newnode;
    rear=newnode;
}
int dequeue(){
    if(front==NULL){
        return -1;
    }
    struct Node* temp=front;
    int x=temp->data;
    front=front->next;
    if(front==NULL){
        rear==NULL;
    }
    free(temp);
    return x;

}
void display(){
    struct Node* temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    printf("deleting %d from queue\n",dequeue());
    display();
    return 0;
}
