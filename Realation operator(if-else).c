//CREATE A PROGRAMME THAT FINDS OUT EVEN AND ODD DIGIT

#include<stdio.h>

int main()

{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num%2==0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;

}
