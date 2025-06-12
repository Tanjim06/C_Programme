#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
int data;
struct Node *next;
}*first=NULL;
void create(int arr[],int n){
int i;
struct Node *t,*last;
first=(struct Node*)malloc(sizeof(struct Node));
first->data=arr[0];
first->next=NULL;
last=first;
for(i=1;i<n;i++){
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=arr[i];
    t->next=NULL;
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
void Rdisplay(struct Node* p){
if(p==NULL) return;
printf("%d ",p->data);
Rdisplay(p->next);
}
int countNode(struct Node* p){
int count=0;
while(p!=NULL){
p=p->next;
count++;
}
return count;
}
int RcountNode(struct Node* p,int count){
if(p==NULL) return count;
return RcountNode(p->next,count+1);
}
int sum(struct Node* p){
int s=0;
while(p!=NULL){
    s+=p->data;
    p=p->next;
}
return s;
}
int rsum(struct Node* p){
int s=0;
if(p==NULL) return 0;
s+=p->data;
return s+rsum(p->next);
}
int max(struct Node *p){
int m=0;
while(p!=NULL){
    if(m<p->data){
        m=p->data;
    }
    p=p->next;
}
return m;
}
int rmax(struct Node* p){
int x=0;
if(p==NULL) return 0;
x=rmax(p->next);
if(x>p->data) return x;
else return p->data;
}
bool search(struct Node* p,int target){
while(p!=NULL){
    if(p->data==target) return true;
    break;
}
return false;
}
bool rsearch(struct Node* p,int target){
if(p==NULL) return false;
if(target==p->data) return true;
else rsearch(p->next,target);
}
void insertAtFront(struct Node* p){
int x;
printf("Enter the value : ");
scanf("%d",&x);
struct Node *t=(struct Node*)malloc(sizeof(struct Node));
t->data=x;
t->next=first;
first=t;
}
void insertAtArbitrary(struct Node* p,int pos){
int x;
printf("Enter the value : ");
scanf("%d",&x);
struct Node* t=(struct Node*)malloc(sizeof(struct Node));;
p=first;
for(int i=0;i<pos-1;i++){
    p=p->next;
}
t->data=x;
t->next=p->next;
p->next=t;
}
void deleteFirstNode(struct Node *p){
p=first;
first=first->next;
free(p);
}
void deleteAnyNode(struct Node* p,int pos){
struct Node* q=NULL;
int c=0;
while(c!=pos-1){
    c++;
    q=p;
    p=p->next;
}
q->next=p->next;
free(p);
}
bool checkSortedLL(struct Node* p){
while(p!=NULL && p->next!=NULL){
    if(p->data>p->next->data){
        return false;
    }
    p=p->next;
}
return true;
}
int main(){
int n=5,c=0;
int arr[5]={1,2,3,40,5};
create(arr,n);
//Rdisplay(first);
//printf("%d",countNode(first));
//printf("%d ",RcountNode(first,c));
//printf("%d",sum(first));
//printf("%d",rsum(first));
//printf("%d",max(first));
//printf("%d",rmax(first));
//printf("%d",search(first,10));
//printf("%d",rsearch(first,100));
//insertAtFront(first);
//insertAtArbitrary(first,4);
//deleteFirstNode(first);
//deleteAnyNode(first,4);
//Rdisplay(first);
printf("%d",checkSortedLL(first));
return 0;
}
