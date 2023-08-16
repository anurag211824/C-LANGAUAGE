#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct avenger
    {
        int speed;
        int health;
        int power;
        char name[20];
        float efficient;
    } avenger;
    avenger arr[3]; /* arr[0]=iron man, arr[1]=thor, arr[2]=captain america*/

    strcpy(arr[0].name, "iron man");
    arr[0].speed = 95;
    arr[0].power = 90;
    arr[0].health = 85;
    arr[0].efficient = 90.5;

    strcpy(arr[1].name, "thor");
    arr[1].speed = 95;
    arr[1].power = 90;
    arr[1].health = 85;
    arr[1].efficient = 90.5;

    strcpy(arr[2].name, "captain america");
    arr[2].speed = 76;
    arr[2].power = 90;
    arr[2].health = 90;
    arr[2].efficient = 90.5;
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i].name);
        printf("speed :%d \n", arr[i].speed);
        printf("power :%d \n", arr[i].power);
        printf("health :%d  \n", arr[i].health);
        printf("efficient :%.2f \n", arr[i].efficient);
       printf("\n");
    }

    return 0;
}