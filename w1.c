//week 1 (linear search)
#include<stdio.h>
void search(int arr[],int n,int target){
for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("%d found at index %d",target,i);
            return;
        }
}
printf("Elment not found");
}

int main(){
int n,target;
printf("Enter the size of the array : ");
scanf("%d",&n);
printf("Enter the element you want to find : ");
scanf("%d",&target);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
search(arr,n,target);
return 0;
}
