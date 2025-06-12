#include<stdio.h>
#include<stdbool.h>
int main(){
int n;
printf("Enter the size of the array : ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int key;
printf("Enter the element you want to find : ");
scanf("%d",&key);
bool found=0;
printf("The number %d found at index ",key);
for(int i=0;i<n;i++){
    if(arr[i]==key){
        printf("%d ",i);
        found=1;
    }
}
if(!found) printf("none");
printf("\n");
return 0;
}
