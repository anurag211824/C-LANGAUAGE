#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;
    int z;
    z = b * a;
    printf("the value of z is %d \n", z);
    // this is legal

    // int z;
    // b * a = z;
    // this is illegal

    printf("the value of a+b is %d \n", a + b);
    printf("the value of a-b is %d \n", a - b);
    printf("the value of a*b is %d \n", a * b);
    printf("the value of b/a is %d \n", b / a);

    printf("5 when divided by 2 leaves a remainder of %d \n", 5 % 2);
    printf("-5 when divided by 2 leaves a remainder of %d \n", -5 % 2);
    printf("5 when divided by 2 leaves a remainder of %d \n", 5 % -2);

    // no operator is assumed to be present
    printf("the value of 4 * 5 is %d \n", 4 * 5);
    // printf("the value of 4 * 5 is %d \n",(4)(5));----> will not return 20 it is wrong

    // there is no operator to perform exponentiation in c
    // printf("the value of 4 ^ 5 is %d \n",4^5);----> will not produce 4 to the power 5
    printf("the value of 2 ^ 30 is %f \n", pow(2, 30));

    printf("the value of 6 + 5 is %d \n", 6 + 5);
    printf("the value of 6 + 5.6 is %f \n", 6 + 5.6);
    printf("the value of 6.1 + 5.6 is %f \n", 6.1 + 5.6);
    printf("the value of 3.0/9 is %f \n", 3.0 / 9);

    return 0;
}