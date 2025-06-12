/*CREATE A PROGRAME THAT TAKES TWO INTEGER VALUE AND
DISPLAY THE SUM AND AVERAGE*/
#include<stdio.h>
int main()
{
    int a,b,sum;
    float avg;
    printf("ENTER TWO INTEGER VALUE : ");
    scanf("%d %d",&a,&b);

    sum = a + b;
    printf("THE SUM IS :%d\n",sum);//SUM COMPLETE

    avg = (float)sum/2;//type casting
    printf("THE AVERAGE IS :%f",avg);

    return 0;

}
