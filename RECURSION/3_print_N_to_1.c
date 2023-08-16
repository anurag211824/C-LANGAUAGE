#include <stdio.h>
void decresing(int x)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        printf("%d ", x);
        decresing(x - 1);
        return;
    }
}
int main()
{
int n;
printf("enter n:");
scanf("%d",&n);
decresing(n);
    return 0;
}