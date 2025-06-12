/*A record contains a name of cricketer,his age,number of matches,average runs per matches.Create a
array of structure to hold this records.
*/
#include<stdio.h>
int main(){
typedef struct cricketer{
char name[15];
int age;
int matches;
float avg_run;
}Cricketer;

Cricketer arr[3];
for(int i=0;i<3;i++){
    scanf("%s",arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].matches);
    scanf("%f",&arr[i].avg_run);
}
for(int i=0;i<3;i++){
    printf("name is %s\n",arr[i].name);
    printf("The age is %d\n",arr[i].age);
    printf("The matches is %d\n",arr[i].matches);
    printf("The average run is %f",arr[i].avg_run);
}

return 0;
}
