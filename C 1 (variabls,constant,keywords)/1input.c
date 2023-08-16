#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the value of a \n");
    scanf("%d", &a);

    printf("enter the value of b \n");
    scanf("%d", &b);
    int d=a+b;

    printf("the sum of a and b is %d \n",d);

    printf("enter the value of c \n");
    scanf("%d", &c);
    printf("the product of c and a is %d \n", a * c);
    return 0;
}