#include<stdio.h>
#define maxsize 10
int queue[maxsize];
int front=0,rear=-1;
void enqueue(int x){
    if(rear==maxsize-1) return;
    queue[++rear]=x;
}
int dequeue(){
    if(front>rear) return -1;
    int x=queue[front++];
    printf("%d removing from queue\n",x);
    return x;
}
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
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
    dequeue();
    display();
    return 0;
}