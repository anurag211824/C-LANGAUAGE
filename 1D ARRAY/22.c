#include <stdio.h>

int isPalindrome(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }

    return 1; // Palindrome
}

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

    if (isPalindrome(arr,n))
    {
        printf("The array is a palindrome.\n");
    }
    else
    {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}
