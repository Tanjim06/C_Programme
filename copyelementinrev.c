#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
int b[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=n-1;i>=0;i--){
    b[4-i]=arr[i];
}
for(int i=0;i<n;i++){
    printf("%d ",b[i]);
}
return 0;
}
