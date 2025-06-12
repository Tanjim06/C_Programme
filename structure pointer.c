#include<stdio.h>
typedef struct pokemon{
int hp;
int speed;
int attack;
}Pokemon;
int main(){
Pokemon pikachu;
pikachu.hp=100;
pikachu.speed=150;
pikachu.attack=190;
printf("%p\n",&pikachu);
printf("%p\n",&pikachu.hp);
printf("%p\n",&pikachu.speed);
printf("%p",&pikachu.attack);

return 0;
}
