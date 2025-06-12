/*CREATE A PROGRAM THAT CONVERT UPPERCASE LETTER TO
LOWERCASE LETTER WITH LIBRARY FUNCTION
*/
#include<stdio.h>
int main()
{
   char A; //A is the variable for uppercase letter
   char a; //a is the variable for lowercase letter
   printf("ENTER AN UPPERCASE LETTER: ");
   scanf("%c",&A);
   a=tolower(A);/*to lower is a function which
                    convert uppercase letter to
                    lowercase
                    */
   printf("THE LOWERCASE LETTER IS :%c",a);
   getch();
}
