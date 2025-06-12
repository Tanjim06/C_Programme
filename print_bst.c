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
    if(x<root->data){
        root->left=insert(root->left,x);
    }
    else{
        root->right=insert(root->right,x);
    }
    return root;
}
void display(struct Node* root){
    if(root==NULL) return;
    display(root->left);
    printf("%d ",root->data);
    display(root->right);
}
struct Node* findmin(struct Node* root){
    if(root==NULL) return NULL;
    if(root->left==NULL) return root;
    return findmin(root->left);
}
struct Node* del(struct Node* root,int target){
    if(root==NULL) return NULL;
    if(target>root->data){
        root->right=del(root->right,target);
    }
    else if(target<root->data){
        root->left=del(root->left,target);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }
        else if(root->left==NULL || root->right==NULL){
            struct Node* temp=(root->left != NULL)?root->left:root->right;
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
void printbst(struct Node* root,int l,int h){
    if(root==NULL) return;
    if(root->data>l && root->data>h) printbst(root->left,l,h);
    else if(root->data<l && root->data<h) printbst(root->right,l,h);
    else{
        printbst(root->left,l,h);
        printf("%d ",root->data);
        printbst(root->right,l,h);
    }
}
int main(){
    struct Node* root=makenode(180);
    insert(root,85);
    insert(root,200);
    insert(root,30);
    insert(root,40);
    insert(root,180);
    insert(root,300);
    insert(root,20);
    insert(root,70);
    insert(root,68);
    insert(root,74);
    insert(root,65);
    insert(root,72);
    insert(root,81);
    printbst(root,60,80);
    return 0;
}