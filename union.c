#include<stdio.h>
#include<string.h>
typedef union pokemon{
int hp;
int attack;
int speed;
char tier;
char name[15];
}Pokemon;
int main(){
Pokemon pikachu;
pikachu.hp=100;
pikachu.attack=150;
pikachu.speed=192;
pikachu.tier='A';
strcpy(pikachu.name,"pikachu");

printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);
printf("%c\n",pikachu.tier);
printf("%s\n",pikachu.name);
return 0;
}
