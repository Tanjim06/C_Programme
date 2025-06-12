#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void insert(struct Node **head, int x)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = x;
    if (*head == NULL)
    {
        *head = newnode;
        newnode->next = *head;
        return;
    }
    struct Node *last = *head;
    while(last->next != *head)
    {
        last = last->next;
    }
    newnode->next = *head;
    last->next = newnode;   
}
void delete(struct Node** head){
    if(*head==NULL) return;
    struct Node* temp=*head;
    if(temp->next==head){
        free(temp);
        return;
    }
    do{
        struct Node* temp1=temp->next;
        temp->next=*head;
        free(temp1);
    }while(temp->next->next!=head);
}
void display(struct Node *head)
{
    struct Node *temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}
int main()
{
    struct Node *head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);
    display(head);
    delete(&head);
    display(head);

    return 0;
}