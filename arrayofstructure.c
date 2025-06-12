#include<stdio.h>
#include<string.h>
int main(){
typedef struct pokemon{
int hp;
int attack;
int speed;
char tier;
char name[15];
}Pokemon;

Pokemon arr[3];
strcpy(arr[0].name,"pikachu");
arr[0].hp=50;
arr[0].attack=100;
arr[0].speed=70;
arr[0].tier='A';

strcpy(arr[1].name,"charizard");
arr[1].hp=150;
arr[1].attack=190;
arr[1].speed=60;
arr[1].tier='S';

strcpy(arr[2].name,"palkia");
arr[2].hp=10000;
arr[2].attack=9000;
arr[2].speed=15000;
arr[2].tier='G';

for(int i=0;i<3;i++){
    printf("name %s \n",arr[i].name);
    printf("hp %d \n",arr[i].hp);
    printf("attack %d \n",arr[i].attack);
    printf("speed %d \n",arr[i].speed);
    printf("tier %c ",arr[i].tier);
}
return 0;
}
