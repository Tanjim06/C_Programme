#include<stdio.h>
typedef int* pointer;
int main(){
int x=5,y=7;
pointer p1=&x,p2=&y;
printf("%p\n",p1);
printf("%p",p2);

return 0;
}
