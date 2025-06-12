/*Create a structure date that contains three members date,month and year.Create two structure
variable with different dates and now compare the two.If the dates are equal then display
message as "Equal" otherwise "Unequal".
*/
#include<stdio.h>
int main(){
typedef struct date{
int date;
int month;
int year;
}Date;

Date d1,d2;
d1.date=14;
d1.month=12;
d1.year=2024;
d2.date=16;
d2.month=12;
d2.year=2024;
if(d1.date==d2.date && d1.month==d2.month && d1.year==d2.year){
    printf("equal");
}
else{
    printf("unequal");
}
return 0;
}
