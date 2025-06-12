#include<stdio.h>
int main(){
int arr[]={8,6,3,2,5,4};
int n=sizeof(arr)/sizeof(arr[0]);
int i,j,k;
for(i=0;i<n;i++){
   for(j=k=i;j<n;j++){
        if(arr[j]<arr[k]){
            k=j;
        }
   }
    int temp=arr[i];
    arr[i]=arr[k];
    arr[k]=temp;
}
for(int l=0;l<n;l++){
    printf("%d ",arr[l]);
}
return 0;
}
