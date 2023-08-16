#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct avenger
    {
        char name[200];
        int power;
        int speed;
        float efficient;
        int health;
    } avenger;
    avenger a;
    typedef struct legendary_avenger
    {
        avenger normal;
        char ability[200];
    } legendary_avenger;
    legendary_avenger b;

    typedef struct god_avenger
    {
        legendary_avenger legend;
        int special_attack;
    } god_avenger;
    god_avenger c;

    // storing data for normal avenger
    strcpy(a.name, "spiderman");
    a.power = 75;
    a.health = 80;
    a.speed = 83;
    a.efficient = 78.5;

    // storing data for legendary avenger
    strcpy(b.ability, "too intelligent");
    strcpy(b.normal.name, "iron man");
    b.normal.power = 89;
    b.normal.health = 93;
    b.normal.speed = 96;
    b.normal.efficient = 95.8;

    // storing data for god avenger
    c.special_attack = 100;
    strcpy(c.legend.ability, "god of thunder");
    strcpy(c.legend.normal.name, "thor");
    c.legend.normal.power = 99;
    c.legend.normal.health = 99;
    c.legend.normal.speed = 100;
    c.legend.normal.efficient = 99.3;

// for normal avenger
printf("%s\n",a.name);
printf("%d\n",a.power);
printf("%d\n",a.health);
printf("%d\n",a.speed);
printf("%f\n",a.efficient);
printf("\n");
// for legendary avenger
printf("%s\n",b.normal.name);
printf("%d\n",b.normal.power);
printf("%d\n",b.normal.health);
printf("%d\n",b.normal.speed);
printf("%f\n",b.normal.efficient);
printf("%s\n",b.ability);
printf("\n");
// for god avenger
printf("%s\n",c.legend.normal.name);
printf("%d\n",c.legend.normal.power);
printf("%d\n",c.legend.normal.health);
printf("%d\n",c.legend.normal.speed);
printf("%f\n",c.legend.normal.efficient);
printf("%s\n",c.legend.ability);
printf("%d\n",c.special_attack);


    return 0;
}