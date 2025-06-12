#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if(i%2!=0){
        arr[i]*=2;
    }
    else{
        arr[i]+=10;
    }
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
