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
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    push(st,arr[i]);
}
for(int i=0;i<n;i++){
    arr[i]=pop(st);
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}

