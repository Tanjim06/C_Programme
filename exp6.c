#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char data;
    struct Node* next;
};
struct Node* top=NULL;
void push(char x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;
    printf("Inserting %c in the stack\n",newnode->data);
    if(top==NULL){
        top=newnode;
        return ;
    }
    newnode->next=top;
    top=newnode;
}
void display(){
    struct Node* temp=top;
    while(temp!=NULL){
        printf("%c ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int pop(){
    if(top==NULL){
        return '\0';
    }
    struct Node* temp=top;
    char x=temp->data;
    top=top->next;
    free(temp);
    return x;
}
void reversestring(char str[]){;
    int n=strlen(str);
    for(int i=0;i<n;i++){
        push(str[i]);
    }
    for(int i=0;i<n;i++){
        str[i]=pop();
    }

}
int main(){
     char str[] = "tanjim";
     printf("Before reversing\n");
     printf("%s\n",str);
    printf("reversing........\n");
    reversestring(str);
    printf("%s",str);
    return 0;
}
