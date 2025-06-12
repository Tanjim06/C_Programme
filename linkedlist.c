#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
//struct Node *head;
void insert(struct Node** head,int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;
    if(*head==NULL){
        *head=newnode;
        return;    
    }
    struct Node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void display(struct Node *head){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void delete(struct Node** head){
    if(*head==NULL) return;
    struct Node* temp=*head;
    if(temp->next==NULL){
        free(temp);
        *head=NULL;
        return;
    }

    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    struct Node* temp1=temp->next;
    temp->next=NULL;
    free(temp1);
}
int main(){
    struct Node *head;
    head=NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    display(head);
    delete(&head);
    display(head);


    return 0;
}