#include <stdio.h>
void fun(int array[], int size)
{
    int temp = array[0];
    array[0] = array[1];
    array[1] = temp;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return;
}
int main()
{

    int arr[2];
    for (int i = 0; i < 2; i++)
    {
        printf("enter %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    fun(arr, 2);
    

    return 0;
}