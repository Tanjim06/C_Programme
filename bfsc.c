#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define vertex 7
#define edges 8
struct Node{
int data;
struct Node* next;
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
if(q->front==q->rear){
    int x=q->front->data;
    free(q->front);
    q->front=q->rear=NULL;
    return x;
}
 struct Node* temp=q->front;
 int x=q->front->data;
 q->front=q->front->next;
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
void bfs(int adj[][vertex],int i){
    struct queue* q=(struct queue*)malloc(sizeof(struct queue));
    initqueue(q);
    int visited[vertex]={0};
    enqueue(q,i);
    visited[i]=1;
    while(!isempty(q)){
            int node=dequeue(q);
            printf("%d ",node);
            for(int j=0;j<vertex;j++){
                if(adj[node][j]==1 && visited[j]==0){
                    enqueue(q,j);
                    visited[j]=1;
                }
            }
    }
    printf("\n");
}
int main(){
int adjmatrix[vertex][vertex]={0};
for(int i=0;i<edges;i++){
    int u,v;
    scanf("%d %d",&u,&v);
    adjmatrix[u][v]=1;
    adjmatrix[v][u]=1;
}
bfs(adjmatrix,0);
return 0;
}

