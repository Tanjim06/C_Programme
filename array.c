#include<stdio.h>
int main(){
int a[5]={1,2,5,6,7};
printf("%p\n",a);
printf("%p\n",&a[0]);
printf("%p\n",&a[1]);
printf("%p\n",&a[2]);
printf("%p\n",&a[3]);
printf("%p",&a[4]);

return 0;
}
