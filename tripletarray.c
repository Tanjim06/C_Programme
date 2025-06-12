#include<stdio.h>
int main(){
int n,x,c=0;
scanf("%d %d",&n,&x);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==x){
                c++;
            }
        }
    }
}
printf("%d",c);
return 0;
}
