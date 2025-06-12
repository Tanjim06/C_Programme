#include<stdio.h>
int fact(int n){
int nfact=1;
for(int i=1;i<=n;i++){
    nfact*=i;
}
return nfact;
}
int ncr(int x,int y){
return fact(x)/(fact(y)*fact(x-y));
}
int main(){
int n,r;
scanf("%d %d",&n,&r);
for(int i=0;i<=n;i++){
    for(int j=0;j<=r;j++){
        if(j<=i){
            printf("%d ",ncr(i,j));
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}
