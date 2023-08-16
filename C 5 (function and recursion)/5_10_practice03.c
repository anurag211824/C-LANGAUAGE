#include <stdio.h>
float force(float mass);
int main()
{
    float m, a;
    printf("enter the mass:");
    scanf("%f", &m);
    a = force(m);
    printf("the force exerted by the earth is %.2f", a);
    return 0;
}
float force(float mass)
{
    float result = mass * 9.8;
    return result;
}