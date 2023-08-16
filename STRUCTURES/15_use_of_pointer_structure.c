#include <stdio.h>
#include <string.h>
typedef struct avenger
{
    int power;
    int speed;
    int health;
} avenger;
int main()
{
    avenger iron_man;
    iron_man.power = 89;
    iron_man.speed = 90;
    iron_man.health = 91;
    // printing the value of power,speed and health before using structure pointer
    printf("%d\n", iron_man.power);
    printf("%d\n", iron_man.speed);
    printf("%d\n", iron_man.health);
    printf("\n");
    // printing the value of power,speed and health after using structure pointer
    avenger *x;
    x = &iron_man;
    (*x).power = 90;
    (*x).speed = 94;
    (*x).health = 96;
    printf("%d\n", iron_man.power);
    printf("%d\n", iron_man.speed);
    printf("%d\n", iron_man.health);

    return 0;
}