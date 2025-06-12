#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* prev;
struct Node* next;
}*first=NULL;
void create(int arr[],int n){
struct Node* t,*last;
int i;
first=(struct Node*)malloc(sizeof(struct Node));
first->data=arr[0];
first->next=NULL;
first->prev=NULL;
last=first;
for(i=1;i<n;i++){
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=arr[i];
    t->next=last->next;
    t->prev=last;
    last->next=t;
    last=t;
}
}
void display(struct Node* p){
while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
}
}
void insert(int x){
struct Node* t;
t=(struct Node*)malloc(sizeof(struct Node));
t->prev=NULL;;
t->data=x;
t->next=first;
first->prev=t;
first=t;
}
void insertAtAny(int pos,int x){
struct Node* p=first;
struct Node* t;
t=(struct Node*)malloc(sizeof(struct Node));
while(pos--){
    p=p->next;
}
t->data=53;
t->next=p->next;
t->prev=p;
p->next->prev=t;
p->next=t;
}
void deleteAtFirst(){
struct Node* t=first;
first=first->next;
first->prev=NULL;
free(t);
}
void deleteAtAny(int pos){
struct Node* p=first;
while(pos--){
    p=p->next;
}
p->prev->next=p->next;
p->next->prev=p->prev;
free(p);
}
int main(){
int n=5;
int arr[]={6,9,3,7,2};
create(arr,n);
deleteAtAny(3);
display(first);
return 0;
}
