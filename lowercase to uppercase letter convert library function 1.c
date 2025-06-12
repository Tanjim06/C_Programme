#include<stdio.h>
int main()
{
    char a;//a is the variable for lowercase letter
    char A;//A is the variable for uppercase letter
    printf("ENTER ANY LOWERCASE LETTER: ");
    scanf("%c",&a);
    A = toupper(a);/*toupper is a library function
                     for converting lowercase to
                     uppercase*/
    printf("THE UPPERCASE LETTER IS :%c",A);
    getch();
}
