#include <stdio.h>

int main()
{
    int principal = 700;
    int rate = 3;
    int time = 1;
    float simple_intrest = principal * rate * time / 100;

    printf("the value of simple intrest is %f", simple_intrest);

    return 0;
}