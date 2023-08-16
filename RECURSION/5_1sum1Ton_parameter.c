#include <stdio.h>
void sum(int n, int s)
{
    if (n == 0)
    {
        printf(" the sum is %d", s);
        return;
    }
    else
    {
        sum(n - 1, s + n);
        return;
    }
}
int main()
{
    int n;
    printf("enter a number n:");
    scanf("%d", &n);
    sum(n, 0);
    return 0;
}