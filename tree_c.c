#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
void createNode(struct Node** root,int data){
    *root=(struct Node*)malloc(sizeof(struct Node));
    (*root)->data=data;
    (*root)->left=NULL;
    (*root)->right=NULL;
}
void traverse(struct Node* root){
    if(root==NULL) return;
    printf("%d ",root->data);
    traverse(root->left);
    traverse(root->right);
}
int main(){
    struct Node* root;
    struct Node* a;
    struct Node* b;
    struct Node* c;
    struct Node* d;
    struct Node* e;
    struct Node* f;
    createNode(&root,10);
    createNode(&a,1);
    createNode(&b,2);
    createNode(&c,3);
    createNode(&d,4);
    createNode(&e,5);
    createNode(&f,6);
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=d;
    b->left=e;
    b->right=f;
    traverse(root);
    return 0;
}