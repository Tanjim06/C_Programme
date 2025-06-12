#include<stdio.h>
int main(){
int arr[]={8,5,7,3,2};
int n=sizeof(arr)/sizeof(arr[0]);
int i,j,x;
for(i=1;i<n;i++){
    j=i-1;
    x=arr[i];
    while(j>-1 && arr[j]>x){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=x;
}
for(int k=0;k<n;k++){
    printf("%d ",arr[k]);
}
return 0;
}
