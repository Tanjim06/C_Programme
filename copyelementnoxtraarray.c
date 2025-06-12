#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int temp;
for(int i=0;i<n;i++){
    temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
    if(i==n/2) break;
}

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

return 0;
}
