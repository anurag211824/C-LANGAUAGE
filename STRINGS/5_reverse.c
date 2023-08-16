#include <stdio.h>
#include <string.h>

int main()
{
    char str[40];
    puts("enetr your string:");
    gets(str);
    int size = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    printf(" the size of string is :%d\n", size);
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("the reverse string is");
    puts(str);
    return 0;
}