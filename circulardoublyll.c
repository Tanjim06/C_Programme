#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
void insert(struct Node** head,int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(*head==NULL){
        newnode->next=newnode;
        newnode->prev=newnode; 
        *head=newnode;
        return;      
    }
    struct Node* tail=*head;
    do{
        tail=tail->next;
    }while(tail->next!=*head);
    newnode->next=*head;
    tail->next=newnode;
    newnode->prev=tail;
    (*head)->prev=newnode;
}
void display(struct Node* head){
    if(head==NULL) return;
    struct Node* temp=head;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=head);
}
int main(){
    struct Node* head=NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    display(head);

    return 0;
}