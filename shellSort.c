#include<stdio.h>
void ShellSort(int arr[],int n){
int gap,i,j,temp;
for(gap=n/2;gap>=1;gap/=2){
    for(i=gap;i<n;i++){
        temp=arr[i];
        j=i-gap;
        while(j>=0 && arr[j]>temp){
            arr[j+gap]=arr[j];
            j=j-gap;
        }
        arr[j+gap]=temp;
    }
}
}
int main(){
int arr[]={9,5,16,8,13,6,12,10,4,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
ShellSort(arr,n);
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
