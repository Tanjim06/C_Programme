#include<stdio.h>
#include<stdlib.h>
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
void insert(struct stack **st,int x){
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->next=NULL;
printf("inserting %d into the stack\n",x);
if((*st)->top==NULL){
(*st)->top=newnode;
return;
}
newnode->next=(*st)->top;
(*st)->top=newnode;
}
int pop(struct stack** st){
if((*st)->top==NULL){
printf("stack is already empty\n");
return -1;
}
struct Node* temp=(*st)->top;
int x=temp->data;
printf("deleting %d from stack\n",x);
(*st)->top=(*st)->top->next;
free(temp);
return x;
}
int peek(struct stack* st){
if(st->top==NULL){
    printf("stack is empty\n");
    return -1;
}
return st->top->data;
}
void display(struct stack *st){
if(st->top==NULL){
return;
}
struct Node* temp=st->top;
while(temp!=NULL){
printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}
int main(){
struct stack * st=(struct stack*)malloc(sizeof(struct stack));
initstack(st);
insert(&st,1);
insert(&st,2);
insert(&st,3);
insert(&st,4);
insert(&st,5);
display(st);
pop(&st);
display(st);

return 0;
}










