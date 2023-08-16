#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int permutation(int n, int r)
{
    int npr = factorial(n) / factorial(n - r);
    return npr;
}
int main()
{
    int n, r;
    printf("enter n:");
    scanf("%d", &n);
    printf("enter r:");
    scanf("%d", &r);
    printf("the npr is %d", permutation(n, r));
    return 0;
}