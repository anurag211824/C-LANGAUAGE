#include <stdio.h>
long int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    printf("enter n:");
    scanf("%d", &n);
    printf("the factorial is %d", factorial(n));
    return 0;
}