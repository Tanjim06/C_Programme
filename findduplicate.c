#include<stdio.h>
int main(){
int arr[]={1,3,5,5,5,5,5,5,6,7};
int c;
for(int i=0;i<10;i++){
    for(int j=i+1;j<10;j++){
        if(arr[i]==arr[j]){
            printf("duplicate element is %d",arr[i]);
            break;
        }

    }

}
return 0;
}
