// write a program to find a number wheather it is prime or not
#include <stdio.h>

int main()
{
    int n, i, prime = 1;
    printf("enter the number to check prime or not\n");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("this is not a prime number\n");
    }
    else
    {

        printf("this is a prime number\n");
    }
    return 0;
}