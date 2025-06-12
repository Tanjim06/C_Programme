//Keyword= switch , case , break , default
#include<stdio.h>
int main()
{
    int digit;
    printf("Enter a digit: ");
    scanf("%d",&digit);
    switch(digit)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    default:
        printf("invalid value");

    }

    return 0;
}
