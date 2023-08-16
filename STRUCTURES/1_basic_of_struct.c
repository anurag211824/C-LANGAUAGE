#include <stdio.h>
 struct avengers
    {
        int speed;
        int health;
        int powers;
        char rating;
        float efficient;
    };
int main()
{

    struct avengers ironman;
    ironman.speed = 85;
    ironman.health = 90;
    ironman.powers = 95;
    ironman.rating = 'A';
    ironman.efficient = 90.2;

    struct avengers captainamerica;
    captainamerica.speed = 70;
    captainamerica.health = 85;
    captainamerica.powers = 90;
    captainamerica.rating = 'A';
    captainamerica.efficient = 87.4;

    struct avengers thor;
    thor.speed = 95;
    thor.health = 94;
    thor.powers = 95;
    thor.rating = 'A';
    thor.efficient = 92.7;

    printf(" rating %c ", ironman.rating);
    printf("%d ", ironman.speed);
    printf("%.2f ", ironman.efficient);
    printf("%d ", ironman.powers);
    printf("%d ", ironman.health);
    return 0;
}