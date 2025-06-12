#include<stdio.h>
#define maxsize 5
int queue[maxsize];
int front=-1,rear=-1;
void enqueue(int x){
if(front==-1) {
    queue[++front]=x;
    rear++;
    return;
}
queue[++rear]=x;
}
int dequeue(){
if(front==-1) return -1;
if(front==rear){
    int x=queue[front];
    front=rear=-1;
    return x;
}
front++;
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
