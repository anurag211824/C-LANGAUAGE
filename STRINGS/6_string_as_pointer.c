#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "anurag kumar";
    char *ptr;
    ptr = &str[0]; /*pointer now points to str[0]*/
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    printf("\n");
    // ***********************************************************************************************************************
    char a[] = "anurag kumar";
    char *p;
    p = a;
    *p = 'u';
    printf("%s\n", p);
    // **************************************************************************************************************************

    // very important *********************************************************************************************************
    char *ptrr = "physic wallah";
    printf("adress 1: %p\n", ptrr);
    ptrr = "college wallah";
    printf("address 2: %p", ptrr);
    // basically pointer changes its address*****************************************************************************
    return 0;
}