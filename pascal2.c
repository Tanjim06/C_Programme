#include<stdio.h>
int main(){
int n,r;
scanf("%d %d",&n,&r);
for(int i=0;i<=n;i++){
    int first=1;
    for(int j=0;j<=r;j++){
        if(j<=i){
            printf("%d ",first);
            first=first*(i-j)/(j+1);
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}
