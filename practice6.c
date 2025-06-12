#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define vertex 5
#define edges 6
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
void push(struct stack *st,int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=st->top;
    st->top=newnode;
}
int pop(struct stack *st){
    if(st->top==NULL){
        printf("stack is already empty\n");
        return -1;
    } 
    struct Node* temp=st->top;
    int x=temp->data;
    st->top=st->top->next;
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
bool isempty(struct stack *st){
    return st->top==NULL;
}
void dfs(int arr[][vertex],int i){
    int visited[vertex]={0};
    struct stack *st=(struct stack*)malloc(sizeof(struct stack));
    initstack(st);
    push(st,i);
    visited[i]=1;
    while(!isempty(st)){
        int node=pop(st);
        printf("%d ",node);
        for(int i=0;i<vertex;i++){
            if(arr[node][i]==1 && !visited[i]){
                push(st,i);
                visited[i]=1;
            }
        }
    }
    printf("\n");
}
int main(){

    int arr[vertex][vertex]={0};
    for(int i=0;i<edges;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        arr[u][v]=1;
        arr[v][u]=1;
    }
    dfs(arr,0);
    return 0;
}