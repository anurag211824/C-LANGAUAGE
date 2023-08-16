#include <stdio.h>/*programm to add the digits of a given number*/
int add(int n);
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    printf("the sum of digits in number is %d", add(n));
    return 0;
}
int add(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + add(n / 10);
    }
}