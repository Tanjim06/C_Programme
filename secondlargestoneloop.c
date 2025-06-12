#include<stdio.h>
#include<limits.h>
int main(){
int n;
int max=INT_MIN;
int smax=INT_MAX;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]>max){
        smax=max;
        max=arr[i];
    }
    else if(smax<arr[i] && max!=arr[i]){
        smax=arr[i];
    }
}
printf("%d",smax);
return 0;
}
