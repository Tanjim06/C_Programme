#include<stdio.h>
typedef struct pokemon{
int hp;
int attack;
int speed;
}Pokemon;
void fun(Pokemon p1){
printf("%d",p1.hp);
return;
}
void change(Pokemon* p1){
//(*p1).hp=200;
p1->hp=200;
}
int main(){
Pokemon p;
p.hp=100;
fun(p);
printf("\n");
change(&p);
printf("%d",p.hp);
return 0;
}
