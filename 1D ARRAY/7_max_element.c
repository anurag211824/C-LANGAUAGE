#include <stdio.h>

int main()
{
    int arr[5] = {2, 3, -1, 5, 43};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("the max element is %d", max);
    return 0;
}