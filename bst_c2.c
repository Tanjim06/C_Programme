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
        newnode->left=newnode->right=NULL;
        return newnode;
    }
    else if(root->data>x){
        root->left=insert(root->left,x);
    }
    else{
        root->right=insert(root->right,x);
    }
    return root;
}
void display(struct Node* root){
    if(!root) return;
    display(root->left);
    printf("%d ",root->data);
    display(root->right);
}
struct Node* findmax(struct Node* root){
    if(root==NULL || root->right==NULL) return root;
    return findmax(root->right);
}
struct Node* del(struct Node* root,int target){
    if(root==NULL) return NULL;
    if(root->data>target) root->left=del(root->left,target);
    else if(root->data<target) root->right=del(root->right,target);
    else{
        if(root->left==NULL && root->right==NULL){
            root=NULL;
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
            struct Node* temp=findmax(root->left);
            root->data=temp->data;
            root->left=del(root->left,temp->data);
        }
    }
    return root;
}
int main(){
    int arr[]={20,15,50,10,18,40,80,7,12,17,19,90,60,45,11,14,13,55,85,100,52,58,95};
    int n=sizeof(arr)/sizeof(arr[0]);
    struct Node* root=NULL;
    for(int i=0;i<n;i++) root=insert(root,arr[i]);
    display(root);
    del(root,15);
    printf("\n");
    display(root);

    return 0;
}