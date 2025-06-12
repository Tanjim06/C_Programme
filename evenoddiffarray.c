#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int es=0,os=0;
for(int i=0;i<n;i++){
    if(i%2==0){
        es+=arr[i];
    }
    else{
        os+=arr[i];
    }
}
printf("%d",es-os);
return 0;
}
