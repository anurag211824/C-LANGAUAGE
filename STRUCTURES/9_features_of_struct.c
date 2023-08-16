#include <stdio.h>
#include<string.h>
int main()
{
    typedef struct avenger
    {
        char name[15];
        int power;
        int speed;
        float efficient;
    } avenger;
    avenger a,b;
    strcpy(a.name, "iron man");
    a.power = 99;
    a.speed = 90;
    a.efficient = 90.6;
    b=a;//deep copy
    strcpy(b.name, "thor");
    printf("%s\n", b.name);
    printf("speed of avenger 'a': %d\n", a.speed);
    printf("speed of avenger 'b' %d\n", b.speed);
    printf("power of avenger 'a': %d\n", a.power);
    printf("power of avenger 'b' %d\n", b.power);

    return 0;
}