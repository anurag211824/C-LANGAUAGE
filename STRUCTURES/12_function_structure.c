#include <stdio.h>
typedef struct avenger
{
    int power;
    int speed;// it is called global declaration
    int health;
} avenger;

void fuction(avenger x)
{
    printf("%d ", x.health);
    printf("%d ", x.power);
    printf("%d ", x.speed);
    return;
}
void change(avenger x)
{
    x.health = 66;
    x.power = 66;// structure is always passed by value not by reference like array
    x.speed = 66;
    return;
}

int main()
{
    avenger iron_man;
    iron_man.health = 98;
    iron_man.power = 87;
    iron_man.speed = 96;
    fuction(iron_man);
    printf("\n");
    change(iron_man);
    printf("%d ", iron_man.health);
    printf("%d ", iron_man.power);
    printf("%d ", iron_man.speed);

    return 0;
}