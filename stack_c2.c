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
void push(struct stack* st,int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;
    if(st->top==NULL){
        st->top=newnode;
        return;
    }
    newnode->next=st->top;
    st->top=newnode;
}
int pop(struct stack* st){
if(st->top==NULL) return -1;
struct Node* temp=st->top;
st->top=st->top->next;
int x=temp->data;
free(temp);
return x;
}
bool isempty(struct stack* st){
return st->top==NULL;
}
void display(struct stack* st){
struct Node* temp=st->top;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
}
void DFS(int adj[][vertex],int s){
struct stack* st=(struct stack*)malloc(sizeof(struct stack));
initstack(st);
int visited[vertex]={0};
visited[s]=1;
push(st,s);
while(!isempty(st)){
    int node=pop(st);
    printf("%d ",node);
    for(int i=0;i<vertex;i++){
        if(adj[node][i]==1 && !visited[i]){
            visited[i]=1;
            push(st,i);
        }
    }
}
printf("\n");
}
int main(){
int adj[vertex][vertex]={0};
for(int i=0;i<edges;i++){
    int u,v;
    scanf("%d %d",&u,&v);
    adj[u][v]=1;
    adj[v][u]=1;
}
DFS(adj,0);
return 0;
}
