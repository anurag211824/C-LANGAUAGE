#include <stdio.h>
int fib(int num);
int main()
{
    int a, n, b;
    printf("enter n for fabinicci:");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        b = fib(a);
        printf("%d ", b);
    }

    return 0;
}
int fib(int num)
{
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}