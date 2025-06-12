#include<stdio.h>
int f(int n){
if(n==1) return 1;
if(n==2) return 2;
return f(n-1)+f(n-2);
}
int main(){

int n;
scanf("%d",&n);
int s = f(n);
printf("%d",s);
return 0;
}
