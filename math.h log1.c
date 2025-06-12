//CREATE A PROGRAME THAT CALCULATES THE VALUE OF LOG x
#include<stdio.h>
#include<math.h>
int main()
{
    double x=10.5; //x is the variable
    double result=log(x); //result is the variable
    //log() is a library function
    //the log() came from math.h file
    printf("log(%lf)=%lf",x,result);
    getch();

}

