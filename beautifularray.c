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
int top(struct stack *st){
return st->top->data;
}
void display(struct stack* st){
struct Node* temp=st->top;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
}
int size(struct stack* st){
int count;
while(st->top!=NULL){
    st->top=st->top->next;
    count++;
}
return count;
}
int main(){
int arr[]={2,3,5,-4,6,-2,-8,9};
int n=sizeof(arr)/sizeof(arr[0]);
struct stack* neighbour=(struct stack*)malloc(sizeof(struct stack));
initstack(neighbour);
push(neighbour,arr[0]);
for(int i=1;i<n;i++){
    if((arr[i]>0 && top(neighbour)>0) || (arr[i]<0 && top(neighbour)<0)){
        push(neighbour,arr[i]);
    }
    else{
        pop(neighbour);
        i++;
    }
}
int i=0;
while(!isempty(neighbour)){
    int x=pop(neighbour);
    arr[i]=x;
    i++;
}
for(int j=0;j<i;j++){
    printf("%d ",arr[j]);
}
return 0;
}
