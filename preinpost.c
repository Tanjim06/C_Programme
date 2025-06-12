#include<stdio.h>
void preinpost(int n){
if(n==0) return;
printf("pre %d\n",n);
preinpost(n-1);
printf("in %d\n",n);
preinpost(n-1);
printf("post %d\n",n);
}
int main(){
int n;
scanf("%d",&n);
preinpost(n);



return 0;
}
