// find the unique number in a given array where all
// the elements are being repeated twice with one value unique
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("enter the size of an array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                
            }
        }
        if (flag == false)
        {
            printf("%d is the unique element\n",arr[i]);
            break;
       
            
            
        }
    }

    return 0;
}