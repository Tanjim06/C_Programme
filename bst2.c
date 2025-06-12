#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* left;
struct Node* right;
};
struct Node* insert(struct Node* root,int x){
if(root==NULL){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
if(root->data>x){
    root->left=insert(root->left,x);
}
else root->right=insert(root->right,x);
return root;
}
struct Node* findmin(struct Node* root){
if(root==NULL) return NULL;
while(root->left!=NULL){
    root=root->left;
}
return root;
}
struct Node* del(struct Node* root,int target){
if(root==NULL) return NULL;
if(root->data>target) root->left=del(root->left,target);
else if(root->data<target) root->right=del(root->right,target);
else{
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }
    else if(root->right==NULL){
        struct Node* temp=root->left;
        free(root);
        return temp;
    }
    else if(root->left==NULL){
        struct Node* temp=root->right;
        free(root);
        return temp;
    }
    else{
        struct Node* temp=findmin(root->right);
        root->data=temp->data;
        root->right=del(root->right,temp->data);
    }
    return root;
}}
void display(struct Node* root){
if(root==NULL) return;
display(root->left);
printf("%d ",root->data);
display(root->right);
}
int main(){
struct Node* root=NULL;
root=insert(root,50);
root=insert(root,40);
root=insert(root,52);
root=insert(root,35);
root=insert(root,42);
root=insert(root,83);
root=insert(root,51);
root=insert(root,33);
root=insert(root,94);
display(root);
del(root,40);
printf("\n");
display(root);
return 0;
}
