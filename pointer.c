#include<stdio.h>
int main(){
int x=5;
printf("%p\n",&x);
int y=10;
int *ptr = &y;
printf("%d",*ptr);
return 0;
}
