#include<stdio.h>
int partition(int arr[],int s,int e){
int pivot=arr[e];
int pindex=s;
for(int i=s;i<e;i++){
    if(arr[i]<=pivot){
        int temp=arr[i];
        arr[i]=arr[pindex];
        arr[pindex]=temp;
        pindex++;
    }
}
int temp=arr[pindex];
arr[pindex]=arr[e];
arr[e]=temp;
return pindex;
}
void quickSort(int arr[],int s,int e){
if(s>=e) return;
int pi=partition(arr,s,e);
quickSort(arr,s,pi-1);
quickSort(arr,pi+1,e);
}
int main(){
int arr[]={50,70,60,90,40,80,10,20,30};
int n=sizeof(arr)/sizeof(arr[0]);
quickSort(arr,0,n-1);
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
