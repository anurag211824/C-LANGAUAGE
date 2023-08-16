#include<stdio.h>
#include<string.h>
typedef struct avenger{
    int power;
    int speed;
    int health;
    char name[10];
}avenger;
int main(){
   avenger iron_man;
   iron_man.power=90;
   iron_man.speed=96;
   iron_man.health=90;
   strcpy(iron_man.name,"iron man");
   avenger *x=&iron_man;
   printf("%p\n",&iron_man.power);
   printf("%p\n",&iron_man.speed);
   printf("%p\n",&iron_man.health);
   printf("%p\n",iron_man.name);
   printf("%p\n",x);

    return 0;
}