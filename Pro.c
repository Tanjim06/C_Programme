/*
Write a program to
swap the value of two variables.
*/
/*
#include<stdio.h>
int main(){
int x=10;
int y=20;
printf("x=%d\ny=%d\n",x,y);
int t=x;   //t=10
x=y;       //x=20
y=t;       //y=10
printf("After swapping\n");
printf("x=%d\ny=%d",x,y);
return 0;
}
*/








/*
Write a program to
swap the value of two variables
without a third variable
*/
/*
#include<stdio.h>
int main(){
int x=20;
int y=10;
printf("x=%d\ny=%d\n",x,y);
x=x+y;    //x=30
y=x-y;    //y=20
x=x-y;    //x=10
printf("After swapping\n");
printf("x=%d\ny=%d",x,y);
return 0;
}

*/










/*
Write a program to
swap the value of two variables
without a third variable
(you cant use '+' and '-' operator)
*/
/*
#include<stdio.h>
int main(){
int x=20;
int y=10;
printf("x=%d\ny=%d\n",x,y);
x=x*y;    //x=30
y=x/y;    //y=20
x=x/y;    //x=10
printf("After swapping\n");
printf("x=%d\ny=%d",x,y);
return 0;
}

*/








/*
Write a program to
swap the value of two variables
without a third variable
(With one line of swapping code)
*/
/*
#include<stdio.h>
int main(){
int x=20;
int y=10;
printf("x=%d\ny=%d\n",x,y);
y=x+y-(x=y);
printf("After swapping\n");
printf("x=%d\ny=%d",x,y);
return 0;
}
*/

/*
#include<stdio.h>
int main(){
int x=20;
int y=10;
printf("x=%d\ny=%d\n",x,y);
y=x*y/(x=y);
printf("After swapping\n");
printf("x=%d\ny=%d",x,y);
return 0;
}
*/

/*

Write a program to print
the following characters in reverse.

Test characters : 'x','m','l'

Expected output : 'l','m','x'

*/
#include<stdio.h>
int main(){
//Relational Operator
//(>, < ,>= ,<= ,== ,!=)

int x= 3<5<4;
printf("%d",x);

return 0;
}


