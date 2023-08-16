#include <stdio.h>

int main()
{
    int n, c;
    printf("enter the number to check primr or not:");
    scanf("%d", &n);
    c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("this is a prime number");
    }
    else
    {
        printf("this is not a prime number");
    }
    return 0;
}