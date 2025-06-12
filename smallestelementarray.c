#include<stdio.h>
#include<limits.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int minelement=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<minelement){
        minelement=arr[i];
    }
}
printf("%d",minelement);
return 0;
}
