/*Q.1 Create a structure type 'book' with name, price and number of pages as
its attributes
*/
/*
#include<stdio.h>
#include<string.h>
int main(){
struct book{
char name[50];
int price;
int page;
} b1,b2,b3;

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
*/

/*Q.2 Create a struct type 'Person' with name,salary and age as it attributes.
Declare and initialize two variable for this.Print the name of the first person
and age of the other.
*/
#include<stdio.h>
#include<string.h>
int main(){
struct person{
char name[25];
int salary;
int age;
} p1,p2;
strcpy(p1.name,"alex");
strcpy(p2.name,"james");
printf("Enter the salary of p1 ");
scanf("%d",&p1.salary);
printf("Enter the salary of p2 ");
scanf("%d",&p2.salary);
printf("Enter the age of p1 ");
scanf("%d",&p1.age);
printf("Enter the age of p2 ");
scanf("%d",&p2.age);
printf("The first person name is %s\n",p1.name);
printf("The second person age is %d\n",p2.age);
return 0;
}
