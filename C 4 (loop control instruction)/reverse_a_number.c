#include <stdio.h>

int main()
{
    int n, remainder, reverse = 0, original;
    printf("enter the number you want to reverse: ");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {

        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("the reverse of the number is %d \n", reverse);
    if (original == reverse)
    {
        printf("it is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
    return 0;
}