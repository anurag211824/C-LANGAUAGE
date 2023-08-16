#include <stdio.h>/* single stair, double stairs and triple stairs are allowed*/
int no_of_ways(int no_of_stairs)
{
    if (no_of_stairs == 1)
    {
        return 1;
    }
    else if (no_of_stairs == 2)
    {
        return 2;
    }
    else if (no_of_stairs == 3)
    {
        return 3;
    }
    else
    {
        return no_of_ways(no_of_stairs - 1) + no_of_ways(no_of_stairs - 2) + no_of_ways(no_of_stairs - 3);
    }
}
int main()
{
    int n;
    printf("enter the number of stairs:");
    scanf("%d", &n);
    int a = no_of_ways(n);
    printf("%d", a);
    return 0;
}