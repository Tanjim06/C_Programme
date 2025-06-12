#include<stdio.h>
int main(){
int arr[]={6,5,4,3,2,1};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
int min=i;
for(int j=i;j<n;j++){
    if(arr[min]>arr[j]) min=j;
}
if(min!=i){
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
}
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}

