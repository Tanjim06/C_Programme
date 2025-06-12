#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* left;
struct Node* right;
};
struct Node* makenode(struct Node* root,int x){
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
};
void display(struct Node* root){
if(root==NULL) return;
printf("%d ",root->data);
display(root->left);
display(root->right);
}
int main(){
struct Node* root=makenode(root,10);
struct Node* a=makenode(root,20);
struct Node* b=makenode(root,30);
struct Node* c=makenode(root,40);
struct Node* d=makenode(root,50);
struct Node* e=makenode(root,60);
root->left=a;
root->right=b;
a->left=c;
a->right=d;
b->right=e;
display(root);
return 0;
}
