/*FIND THE SIZE OF INTEGER,FLOAT,DOUBLE AND CHARACTER
DATA TYPE*/
#include<stdio.h>
int main()
{
    int a;  //a,b,c,d are variable
    float b;
    double c;
    char d;
    printf("size of int is = %d bytes\n",sizeof(a));
    printf("size of float is = %d bytes\n",sizeof(b));
    printf("size of double is = %d bytes\n",sizeof(c));
    printf("size of char is = %d bytes",sizeof(d));
    getch();
}

