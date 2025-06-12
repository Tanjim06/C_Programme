/*CREATE A PROGRAM THAT CONVERT UPPERCASE LETTER TO
LOWERCASE LETTER WITHOUT LIBRARY FUNCTION
*/
#include<stdio.h>
int main()
{
    char A; //A is a variable
    printf("ENTER AN UPPERCASE LETTER: ");
    scanf("%c",&A);
    printf("THE LOWERCASE LETTER IS:%c",A+32);
    getch();
}
