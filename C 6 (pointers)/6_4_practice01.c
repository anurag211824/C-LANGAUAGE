#include <stdio.h>

int main()
{
    int a = 2;
    int *ptr;
    ptr = &a;
    printf("the value of a is %d\n", a);
    printf("the address of a is %u\n", ptr);
    printf("the value of a is %d", *ptr);
    return 0;
}