#include<stdio.h>
int main(){
    int i,j;
    int arr[]={5,4,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++){
        int min_idx=i;
        for(j=i+1;j<n;j++){
            if(arr[min_idx]>arr[j]){
                min_idx=j;
            }
        }
        if(i!=min_idx){
            int temp=arr[min_idx];
            arr[min_idx]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}