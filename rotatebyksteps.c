#include<stdio.h>
int main(){
int n,k;
scanf("%d %d",&n,&k);
int arr[n];
if(k>n){
    k%=n;
}
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0,j=n-1;i<=k-1;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
