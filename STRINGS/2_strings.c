#include <stdio.h>

int main()
{
    // creating a characte rarray
    // char arr[] = "college wallah";
    // int i = 0;
    // while (i < 14)
    // {
    //     printf("%c", arr[i]);
    //     i++;
    // }

    // good method to print character array than above
    char arr[] = "college walalh is best for coders\0";
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");
    // acessing the individual character of array
    char str[] = "jai shree ram";
    printf("%c", str[5]);

    printf("\n");

   
    return 0;
}