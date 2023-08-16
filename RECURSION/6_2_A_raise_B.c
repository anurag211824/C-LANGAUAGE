#include <stdio.h>
int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x, y - 1);
    }
}
int main()
{
    int x, y;
    printf("enter base:");
    scanf("%d", &x);
    printf("enter power:");
    scanf("%d", &y);
    printf("required answer is %d:", power(x, y));
    return 0;
}