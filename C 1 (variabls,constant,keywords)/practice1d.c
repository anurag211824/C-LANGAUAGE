#include <stdio.h>

int main()
{
    float celcius;

    printf("what is the value of celcius \n");
    scanf("%f", &celcius);
    float farenhite = celcius * 9 / 5 + 32;
    printf("conversion of celcius to farenhite is %f", farenhite);
    return 0;
}