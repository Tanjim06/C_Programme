/*
#include<stdio.h>
//typedef old_name new_name;
typedef float realNumber;   //creating a alias named realNumber for float
typedef int Integer;        //creating a alias named Integer for int
int main(){
Integer x=10;
printf("%d\n",x);
realNumber y=7.1654;
printf("%f",y);

return 0;
}
*/
/*Q.1 Create a structure type 'book' with name, price and number of pages as
its attributes
*/

#include<stdio.h>
#include<string.h>
int main(){
typedef struct book{
char name[50];
int price;
int page;
} book;
book b1;
book b2;
book b3;
strcpy(b1.name,"Python");
printf("Enter the price of b1");
scanf("%d",&b1.price);
printf("Enter the page of b1");
scanf("%d",&b1.page);
strcpy(b2.name,"Machine learning");
printf("Enter the price of b2");
scanf("%d",&b2.price);
printf("Enter the page of b2");
scanf("%d",&b2.page);
strcpy(b3.name,"Deep learning");
printf("Enter the price of b3");
scanf("%d",&b3.price);
printf("Enter the page of b3");
scanf("%d",&b3.page);
printf("The name of b1 is %s\n",b1.name);
printf("The name of b2 is %s\n",b2.name);
printf("The name of b3 is %s\n",b3.name);
printf("The price of b1 is %d\n",b1.price);
printf("The price of b2 is %d\n",b2.price);
printf("The price of b3 is %d\n",b3.price);
printf("The page of b3 is %d\n",b1.price);
printf("The page of b3 is %d\n",b2.price);
printf("The page of b3 is %d\n",b3.price);
return 0;
}



