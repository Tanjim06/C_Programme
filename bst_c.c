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
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct Node* insert(struct Node* root,int x){
    if(root==NULL) return makenode(x);
    else if(x>root->data) root->right=insert(root->right,x);
    else root->left=insert(root->left,x);
    return root;
}
void in(struct Node* root){
    if(root==NULL) return;
    in(root->left);
    printf("%d ",root->data);
    in(root->right);
}
struct Node* findMin(struct Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}
struct Node* del(struct Node* root,int target){
    if(root==NULL) return root;
    if(target<root->data) root->left=del(root->left,target);
    else if(target>root->data) root->right=del(root->right,target);
    else{
        if(root->left==NULL && root->right==NULL){
            free(root);
            root=NULL;
            return root;
        }
        else if(root->left==NULL){
            struct Node* temp=root->right;
            root=root->right;
            free(temp);
        }
        else if(root->right==NULL){
            struct Node* temp=root->left;
            root=root->left;
            free(temp);
        }
        else{
            struct Node* temp=findMin(root->right);
            root->data=temp->data;
            root->right=del(root->right,temp->data);
        }
    }
    return root;
}
int main(){
    struct Node* root=makenode(10);
    insert(root,14);
    insert(root,19);
    insert(root,28);
    insert(root,70);
    insert(root,17);
    insert(root,34);
    insert(root,55);
    insert(root,89);
    insert(root,50);
    insert(root,20);
    insert(root,60);
    in(root);
    root=del(root,60);
    in(root);
    return 0;
}