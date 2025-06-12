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
printf("%d",ncr(n,r));
return 0;
}
