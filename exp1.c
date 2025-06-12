#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_idx=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[max_idx]){
            max_idx=i;
        }
    }
    printf("The max element is %d",arr[max_idx]);
    return 0;
}