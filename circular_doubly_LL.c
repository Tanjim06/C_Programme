#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* prev;
struct Node* next;
}*head=NULL;
void create(int arr[],int n){
struct Node* t;
struct Node* last;
head=(struct Node*)malloc(sizeof(struct Node));
head->data=arr[0];
head->prev=head;
head->next=head;
last=head;
int i;
for(i=1;i<n;i++){
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=arr[i];
    t->next=head;
    t->prev=last;
    last->next=t;
    head->prev=t;
    last=t;
}
}
void insertAtHead(struct Node* p,int x){
struct Node* t=p;
do{
    t=t->next;
}while(t!=head);
t=(struct Node*)malloc(sizeof(struct Node));
t->data=x;
t->next=head;
t->prev=head->prev;
head->prev->next=t;
head=t;
}
void insertAtAny(struct Node* p,int pos,int x){
struct Node* t=p;
int i;
for(i=0;i<pos-1;i++){
    t=t->next;
}
t=(struct Node*)malloc(sizeof(struct Node));
t->data=x;
t->next=t->prev->next;
t->next->prev=t;
t->prev->next=t;
}
void display(struct Node* p){
do{
    printf("%d ",p->data);
    p=p->next;
}while(p!=head);
}
int main(){
int n=5;
int arr[]={6,9,2,7,8};
create(arr,n);
insertAtHead(head,96);
insertAtAny(head,4,100);
display(head);
return 0;
}
