#include<stdio.h>
#include<limits.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
int maxelement=INT_MIN;
int slarge=INT_MIN;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]>maxelement){
        maxelement=arr[i];
    }
}
for(int i=0;i<n;i++){
    if(arr[i]!=maxelement && arr[i]>slarge){
        slarge=arr[i];
    }
}
printf("%d",slarge);
return 0;
}
