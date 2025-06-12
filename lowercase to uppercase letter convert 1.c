/*CREATE A PROGRAM THAT CONVERT LOWERCASE LETTER TO
UPPERCASE LETTER WITHOUT LIBRARY FUNCTION
*/
#include<stdio.h>
int main()
{
 char lower;  //lower is the variable
 printf("ENTER ANY LOWERCASE LETTER: ");
 scanf("%c",&lower);
 printf("THE UPPERCASE LETTER IS:%c",lower-32);
 getch();

}
