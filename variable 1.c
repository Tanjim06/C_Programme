/*AN INTEGER VARIABLE a THAT CONTAIN 10,b THAT
CONTAIN 20,c THAT CONTAIN 30.5,d THAT CONTAIN
30.1257568,e THAT CONTAIN 'D'.
WRITE A PROGRAME THAT PRINTS ALL THE DATA TYPE
*/
#include<stdio.h>
int main()
{
  //DECLARE THE VARIABLE
  int a=10,b=20;
  float c=30.5;
  double d=30.1257568;
  char e='D';
  //INITIALIZE THE VARIABLE
printf("THE NUMBER IS %d\n",a);
printf("THE NUMBER IS %d\n",b);
printf("THE NUMBER IS %f\n",c);
printf("THE NUMBER IS %lf\n",d);
printf("THE CHARACTER IS %c\n",e);

getch();
}
