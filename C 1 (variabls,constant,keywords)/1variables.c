#include <stdio.h>
int main()
{
    int a = 5;
    float b = 3.5;
    int d = 45;
    float e = a + b;
    float f = d + e;
    float g = a - f;
    printf("the value of a is %d \n", a);
    printf("the value of b is %f \n", b);
    printf(" the sum of a and b is %f \n", e);
    printf("the sum of d and e is %f \n", f);
    printf("the difference of a and f is %f \n", g);
    printf("the product of a,b,d,e,f,g is %f \n", a * b * d * e * f * g);
    return 0;
}