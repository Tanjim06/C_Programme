#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
int arr[]={1,2,3,4,5,6,7,8};
int i;
for(i=0;i<9;i++){
    if(arr[i]==x){
        break;
    }
}
if(i!=9){
    printf("element found");
}
else{
    printf("element not found");
}

return 0;
}
