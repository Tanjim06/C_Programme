#include<stdio.h>
#include<string.h>
int max(int arr[],int n){
int m=0;
for(int i=0;i<n;i++){
    if(arr[i]>m){
        m=arr[i];
    }
}
return m;
}
int main(){
int arr[]={6,3,9,10,15,6,8,12,3,6};
int n=sizeof(arr)/sizeof(arr[0]);
int m=max(arr,n);
int freq[m];
memset(freq,0,sizeof(freq));
for(int i=0;i<n;i++){
    freq[arr[i]]++;
}
int i=0,j=0;
while(i<=m){
    if(freq[i]>0){
    arr[j++]=i;
    freq[i]--;
    }
    else{
        i++;
    }
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
