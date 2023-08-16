#include <stdio.h>

int main()
{
    int arr[5] = {-2, -3, -1, -5, -43};
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    printf("the min element is%d", min);
    return 0;
}