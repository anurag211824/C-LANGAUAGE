#include <stdio.h>
float fahrenhite(float celcius);
int main()
{
    float a, c;
    printf("enter the celcius temp:");
    scanf("%f", &c);
    a = fahrenhite(c);
    printf("the conversion of celcius to fahrenhite is %.3f", a);
    return 0;
}
float fahrenhite(float celcius)
{
    float result = (9 / 5) * celcius + 32;
    return result;
}