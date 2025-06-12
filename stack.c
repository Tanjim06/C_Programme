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
void push(struct stack* st){
printf("Enter the element you want to push : \n");
int x;
scanf("%d",&x);
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->next=NULL;
printf("inserting %d in the stack\n",x);
if(st->top==NULL){
    st->top=newnode;
    return;
}
newnode->next=st->top;
st->top=newnode;
}
int pop(struct stack*st){
if(st->top==NULL) return -1;
struct Node* temp=st->top;
int x=temp->data;
st->top=st->top->next;
printf("deleting %d from stack\n",x);
free(temp);
return x;
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
int choice;
do{
printf("****************************************************\n");
printf("***********************stack************************\n");
printf("choose an operation : \n");
printf("1.push          \n2.pop        \n3.display            \n4.Exit\n");
scanf("%d",&choice);
switch(choice){
case 1:
    push(st);
    break;
case 2:
    pop(st);
    break;
case 3:
    display(st);
    break;
case 4:
    printf("Exiting program..............\n");
    break;
default:
    printf("invalid opearation");
}}while(choice!=4);
return 0;
}
