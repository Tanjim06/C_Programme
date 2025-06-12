#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
int data;
struct Node* next;
};
struct stack{
struct Node* top;
};
void initstack(struct stack* st){
st->top=NULL;
}
void push(struct stack* st,int x){
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->next=NULL;
if(!newnode) return;
if(st->top==NULL){
    st->top=newnode;
    return;
}
newnode->next=st->top;
st->top=newnode;
}
int pop(struct stack* st){
if(st->top==NULL) return -1;
struct Node* temp=st->top;
int x=temp->data;
st->top=st->top->next;
free(temp);
return x;
}
bool isempty(struct stack* st){
return st->top==NULL;
}
void display(struct stack* st){
struct Node* temp=st->top;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
}
int main(){
struct stack* st=(struct stack*)malloc(sizeof(struct stack));
initstack(st);
struct stack* st2=(struct stack*)malloc(sizeof(struct stack));
initstack(st2);
push(st,1);
push(st,2);
push(st,3);
push(st,4);
push(st,5);
while(!isempty(st)){
    int x=pop(st);
    push(st2,x);
}
int y=10;
push(st,y);
while(!isempty(st2)){
    int x=pop(st2);
    push(st,x);
}
display(st);
return 0;
}
