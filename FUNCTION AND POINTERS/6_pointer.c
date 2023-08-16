#include <stdio.h>

int main()
{
    int a = 4;
    int *x;
    x = &a;
    printf("%u\n", &a);
    printf("%d\n",x);
    printf("%d",*x);
    return 0;
}