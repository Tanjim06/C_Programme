#include<stdio.h>
int main(){
int arr[]={6,5,4,3,2,1};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && key<arr[j]){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
