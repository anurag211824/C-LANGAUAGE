#include <stdio.h>

int main()
{
    int names;
    printf("enter the number of students:");
    scanf("%d", &names);
    int arr[names][3];
    for (int i = 0; i < names; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("for student %d:",i+1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < names; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}