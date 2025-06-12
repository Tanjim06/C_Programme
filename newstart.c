//Q.1 count the area of a circle
/*
#include<stdio.h>
int main(){
float pi=3.14;
float radius,area;
printf("enter the valur of radius : ");
scanf("%f",&radius);
area=pi*radius*radius;
printf("the area of the circle is : %f",area);
return 0;
}
*/

//Q.2 check if a year is leap year or not
/*
#include<stdio.h>
int main(){
int year;
printf("enter the year: ");
scanf("%d",&year);
if(year%4==0){
printf("the year is leap year");
}
else if(year%100==0){
printf("the year is leap year");
}
else{
printf("the year is not leap year");
}
return 0;
}
*/

//Q.3 Calculate the sum of all numbers from 0 to 100 that are divisible by 4.
/*
#include<stdio.h>
int main(){
int sum=0;
for(int i=0;i<=100;i++){
if(i%4==0){
sum=sum+i;
}
}
printf("the sum is : %d",sum);
return 0;
}
*/

//The string library functions
#include<stdio.h>
#include<string.h>
int main(){
char name[ ]="tanjim ahmed";
strlen("tanjim");


return 0;
}

