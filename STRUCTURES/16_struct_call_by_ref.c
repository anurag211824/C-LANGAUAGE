#include <stdio.h>
#include <string.h>
typedef struct avenger
{
    char name[20];
    int power;
    int speed;
    int health;
} avenger;

void change(avenger *x)
{
    strcpy((*x).name, "steel man");
    (*x).power = 99;
    (*x).speed = 98;// instead of doing (*x).something we can also write x->.something
    (*x).health = 87;
    x->name; // like this
}
int main()
{
    avenger iron_man;
    strcpy(iron_man.name, "iron man");
    iron_man.power = 70;
    iron_man.speed = 67;
    iron_man.health = 78;
    // printing the iron man details before change
    printf("name: %s\n", iron_man.name);
    printf("power: %d\n", iron_man.power);
    printf("speed: %d\n", iron_man.speed);
    printf("health: %d\n", iron_man.health);
    printf("the changed characteristics are\n");

    // changing the iron man details by creating a change function
    change(&iron_man);
    printf("name: %s\n", iron_man.name);
    printf("power:%d\n", iron_man.power);
    printf("speed: %d\n", iron_man.speed);
    printf("health: %d\n", iron_man.health);

    return 0;
}