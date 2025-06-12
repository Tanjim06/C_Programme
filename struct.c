#include<stdio.h>
int main(){
//created a new data type
struct pokemon{
int hp;
int speed;
int attack;
char tier;
} pikachu,charizard,mewtwo;
//created an instances of the new data type
//struct pokemon pikachu;
//pikachu.speed = 100;
//pikachu.hp = 50;
//pikachu.attack = 60;
//pikachu.tier = 'A';
printf("Enter the speed of pikachu : ");
scanf("%d",&pikachu.speed);
printf("Enter the hp of pikachu : ");
scanf("%d",&pikachu.hp);
printf("Enter the attack of pikachu : ");
scanf("%d",&pikachu.attack);
printf("Enter the tier of pikachu : ");
scanf("%c",&pikachu.tier);
//created an instances of the new data type
//struct pokemon charizard;
charizard.attack = 130;
charizard.hp = 80;
charizard.speed = 80;
charizard.tier = 'S';
//created an instances of the new data type
//struct pokemon mewtwo;
mewtwo.attack = 170;
mewtwo.hp = 150;
mewtwo.speed = 200;
mewtwo.tier = 'G';
printf("Health of pikachu is %d\n",pikachu.hp);
printf("Attack of pikachu is %d\n",pikachu.attack);
printf("tier of pikachu is %c",pikachu.tier);
printf("Speed of pikachu is %d",pikachu.speed);
return 0;
}
