#include <stdio.h>
// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("the value of element %d is %d\n", i + 1, *(ptr + i));
//     }
// }

void printArray(int ptr[], int n)
{ptr[2]=55;
    for (int i = 0; i < n; i++)
    {
        printf("the value of element %d is %d\n", i + 1, ptr[i]);
    }
   /* this value will be changes in arr array of main as well*/ 
}
int main()
{
    int arr[] = {1, 2, 23, 32, 26, 34};
    printArray(arr, 6);
    return 0;
}
