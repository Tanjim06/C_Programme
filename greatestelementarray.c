#include<stdio.h>
#include<limits.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int maxelement=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>maxelement){
        maxelement=arr[i];
    }
}
printf("%d",maxelement);
return 0;
}
