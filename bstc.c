#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* left;
struct Node* right;
};
struct Node* insert(struct Node* root,int x){
if(root==NULL){
    printf("inserting %d in bst\n",x);
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
if(root->data>x){
    root->left=insert(root->left,x);
}
else{
    root->right=insert(root->right,x);
}
return root;
}
struct Node* findmin(struct Node* root){
    if(root==NULL) return NULL;
    struct Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
struct Node* findmax(struct Node* root){
    if(root==NULL) return NULL;
    struct Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}
struct Node* del(struct Node* root,int x){
if(root==NULL) return NULL;
if(root->data>x){
    root->left=del(root->left,x);
}
else if(root->data<x){
    root->right=del(root->right,x);
}
else{
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }
    else if(root->left==NULL){
        struct Node* temp=root->right;
        free(root);
        return temp;
    }
    else if(root->right==NULL){
        struct Node* temp=root->left;
        free(root);
        return temp;
    }
    else{
        struct Node* temp=findmin(root->right);
        root->data=temp->data;
        root->right=del(root->right,temp->data);
    }
}
return root;
}
void display(struct Node* root){
if(root==NULL) return;
display(root->left);
printf("%d ",root->data);
display(root->right);
}
int main(){
struct Node* root=NULL;
root=insert(root,15);
root=insert(root,7);
root=insert(root,20);
root=insert(root,5);
root=insert(root,10);
root=insert(root,17);
root=insert(root,25);
display(root);
printf("\n");
return 0;
}
