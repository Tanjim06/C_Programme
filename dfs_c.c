#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Stack{
    struct Node* top;
};
void init(struct Stack *st){
    st->top=NULL;
}
void push(struct Stack * st,int x){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=st->top;
    st->top=newnode;
}
int pop(struct Stack *st){
    if(st->top==NULL) return -1;
    if(st->top->next==NULL){
        int temp=st->top->data;
        st->top=NULL;
        return temp;
    }
    struct Node* t=st->top;
    int x=t->data;
    st->top=t->next;
    free(t);
    return x;
}
void display(struct Node *top){
    if(top==NULL) return;
    printf("%d ",top->data);
    display(top->next);
}
void dfs(int adj[][5],int u,int vertex,int visited[]){
    
    if(visited[u]==0){
        printf("%d ",u);
        visited[u]=1;
        for(int v=0;v<vertex;v++){
            if(adj[u][v]==1 && visited[v]==0){
                dfs(adj,v,vertex,visited);
            }
        }
    }
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
    int visited[5]={0};
    for(int i=0;i<edges;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        adj[u][v]=1;
        adj[v][u]=1;
    }
    dfs(adj,0,vertex,visited);
    return 0;
}