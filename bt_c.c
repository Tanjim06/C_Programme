#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* left;
struct Node* right;
};
struct Node* insert(){
int element;
scanf("%d",&element);
if(element==-1) return NULL;
struct Node* root=(struct Node*)malloc(sizeof(struct Node));
root->data=element;
printf("Enter the left child of %d : ",element);
root->left=insert();
printf("Enter the right child of %d : ",element);
root->right=insert();
return root;
}
void display(struct Node* root){
if(root==NULL) return;
display(root->left);
printf("%d ",root->data);
display(root->right);
}
int main(){
struct Node* root;
root=insert();
display(root);

return 0;
}
