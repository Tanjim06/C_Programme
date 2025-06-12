/*Create a structure 'person' having attributes as age and weight.
Access its structure variable with pointers.
*/
#include<stdio.h>
typedef struct person{
int age;
int weight;
}Person;
int main(){
Person p;
Person* p1=&p;
(*p1).age=15;
(*p1).weight=60;
printf("%d\t",p.age);
printf("%d",p.weight);

return 0;
}
