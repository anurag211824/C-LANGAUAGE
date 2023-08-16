#include <stdio.h>

int main()
{
    int a = 0;
    do
    {
        printf("the value of a is %d\n ", a);
        if (a == 4)
        {
            break;
        }
        a++;
    } while (a < 10);

    return 0;
}