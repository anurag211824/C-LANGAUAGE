//  write a program to print the sum of numbers in multipilcation table of 8
#include <stdio.h>

int main()
{
    int a = 8;
    int i;
    for (i = 1; i <= 10; i++)
    {
        int b = a * i;

        printf("%dx%d=%d\n", a, i, b);
    }
    int c = 0;
    int d;
    for (d = 8; d <= a * 10; d += 8)
    {
        c += d;
    }
    printf("the sum of numbers in multiplication table of 8 is %d\n", c);

    return 0;
}