#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define vertex 5
#define edges 6
struct Node{
int data;
struct Node*next;
};
struct queue{
struct Node* front;
struct Node* rear;
};
void initqueue(struct queue* q){
q->front=q->rear=NULL;
}
void enqueue(struct queue* q,int x){
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->next=NULL;
if(q->front==NULL && q->rear==NULL){
    q->front=q->rear=newnode;
    return;
}
q->rear->next=newnode;
q->rear=newnode;
}
int dequeue(struct queue* q){
if(q->front==NULL) return -1;
struct Node* temp=q->front;
int x=temp->data;
q->front=q->front->next;
if(q->front==NULL) q->rear=NULL;
free(temp);
return x;
}
void display(struct queue* q){
struct Node* temp=q->front;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
}
bool isempty(struct queue* q){
    return q->front==NULL;
}
void bfs(int adj[][vertex],int source){
    struct queue* q=(struct queue*)malloc(sizeof(struct queue));
    initqueue(q);
    int visited[vertex]={0};
    enqueue(q,source);
    visited[source]=1;
    while(!isempty(q)){
        int node=dequeue(q);
        printf("%d ",node);
        for(int i=0;i<vertex;i++){
            if(adj[node][i]==1 && !visited[i]){
                enqueue(q,i);
                visited[i]=1;
            }
        }
    }
    printf("\n");
    return;
    }
int main(){
int adj[vertex][vertex]={0};
for(int i=0;i<edges;i++){
    int u,v;
    scanf("%d %d",&u,&v);
    adj[u][v]=1;
    adj[v][u]=1;
}
bfs(adj,3);
return 0;
}
