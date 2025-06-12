#include<stdio.h>
void multiple(int arr[],int n){
    for(int i=0;i<n;i++){
            int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
}
int main(){
int arr[]={2,4,3,2,4,2,1,0};
int n=sizeof(arr)/sizeof(arr[0]);
multiple(arr,n);

return 0;
}
