#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define vertex 7
#define edges 8
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
int pop(struct stack*st){
if(st->top==NULL) return -1;
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
bool isempty(struct stack* st){
return st->top==NULL;
}
void dfs(int adjmatrix[][vertex],int node){
int visited[vertex]={0};
struct stack *st=(struct stack*)malloc(sizeof(struct stack));
initstack(st);
push(st,node);
visited[node]=1;
while(!isempty(st)){
    int x=pop(st);
    printf("%d ",x);
    for(int i=0;i<vertex;i++){
        if(adjmatrix[x][i]==1 && !visited[i]){
            push(st,i);
            visited[i]=1;
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
dfs(adjmatrix,0);
return 0;
}


