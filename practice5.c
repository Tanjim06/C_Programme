#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
int stack[maxsize];
int top=-1;
void push(int x){
    if(top==maxsize-1) return;
    stack[++top]=x;
}
int pop(){
    if(top==-1) return -1;
    int x=stack[top--];
    return x;
}
int size(){
    return top+1;
}
void display(){
    for(int i=0;i<size();i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    display();

    return 0;
}