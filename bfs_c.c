#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* front=NULL;
struct Node* rear=NULL;
void enqueue(int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL){
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data=data;
    newnode->next=NULL;
    if(rear==NULL){
        front=newnode;
        rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
    
}
int dequeue(){
    if(front==NULL){
        printf("Queue is already empty\n");
        return -1;
    }
    struct Node* temp=front;
    int x=temp->data;
    front=front->next;
    if(front==NULL){
        rear=NULL;
    }
    free(temp);
    return x;
}
bool empty(){
    return front==NULL;
}
void display(){
    struct Node* temp=front;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}
void bfs(int adj[][5],int node,int vertex){
    bool visited[5]={0};
    enqueue(node);
    visited[node]=1;
    while(!empty()){
        int x=dequeue();
        printf("%d ",x);
        for(int i=0;i<vertex;i++){
            if(adj[x][i]==1 && visited[i]==0){
                enqueue(i);
                visited[i]=1;
            }
        }
    }
    printf("\n");
}
int main(){
    int vertex,edges;
    scanf("%d %d",&vertex,&edges);
    int adj[vertex][vertex];
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            adj[i][j]=0;
        }
    }
    for(int i=0;i<edges;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        adj[u][v]=1;
        adj[v][u]=1;
    }
    bfs(adj,0,vertex);
    return 0;
}