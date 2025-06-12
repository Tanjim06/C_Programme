#include<stdio.h>
int min(int a,int b){
int m;
if(a<b){
    return a;
}
else{
    return b;
}
}
int gcd(int a,int b){
int hcf;
for(int i=min(a,b);i>=1;i--){
    if(a%i==0 && b%i==0){
        hcf=i;
        break;
    }
}
return hcf;
}
int main(){
int x,y;
scanf("%d %d",&x,&y);
int hcf=gcd(x,y);
printf("%d",hcf);

return 0;
}
