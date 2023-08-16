#include <stdio.h>
float average(float a, float b, float c);
int main()
{
    float x, y, z, c;
    printf("enter the value of x:");
    scanf("%f", &x);
    printf("enter the value of y:");
    scanf("%f", &y);
    printf("enter the value of z:");
    scanf("%f", &z);
    c = average(x, y, z);
    printf("the avrage is %.2f", c);

    return 0;
}
float average(float a, float b, float c)
{
    float result = (a + b + c) / 3;
    return result;
}