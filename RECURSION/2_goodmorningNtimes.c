#include <stdio.h>
void greeting(int x)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        greeting(x - 1);
        printf("good morning\n");

        return;
    }
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d", &n);
    greeting(n);
    return 0;
}