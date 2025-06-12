#include<stdio.h>
#include<string.h>
int main(){
typedef struct pokemon{
int attack;
int speed;
int hp;
}Pokemon;
typedef struct legendarypokemon{
Pokemon p1;
char special[10];
}Lpokemon;
Lpokemon dialga;
dialga.p1.attack=39000;
dialga.p1.hp=15000;
dialga.p1.speed=20500;
strcpy(dialga.special,"time");
strcpy(dialga.special,"time");
printf("%s",dialga.special);
return 0;
}
