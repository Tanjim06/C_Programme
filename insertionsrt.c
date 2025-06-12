#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before sorting\n");
    for(int i=1;i<n;i++){
        int element=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>element){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=element;
    }
    printf("\nafter sorting \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}