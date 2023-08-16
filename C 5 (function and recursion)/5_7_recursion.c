#include <stdio.h>
long int factorial(int x);
int main()
{
    int n;
    printf("enter the number for factorail:");
    scanf("%d", &n);
    int a;
    a = factorial(n);
    printf("the factorial of %d is %d", n, a);

    return 0;
}
long int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        int b = x * factorial(x - 1);
        return b;
    }
}