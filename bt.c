#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* left;
struct Node* right;
};
struct Node* makenode(int x){
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
void display(struct Node*root){
if(root==NULL) return;
display(root->left);
printf("%d ",root->data);
display(root->right);
}
int main(){
struct Node* root=makenode(10);
struct Node* a=makenode(20);
struct Node* b=makenode(30);
struct Node* c=makenode(40);
struct Node* d=makenode(50);
struct Node* e=makenode(60);
root->left=a;
root->right=b;
a->left=c;
a->right=d;
b->left=e;
display(root);
return 0;
}
