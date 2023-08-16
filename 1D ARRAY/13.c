// given an array of integrs ,change the value of all odd indexed elements to its second multiple
//  and increment all even indexed value by 10
#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of a array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            printf("%d ",arr[i]+ 10);
        else
            printf("%d ",arr[i] * 2);
        
    }
    return 0;
}