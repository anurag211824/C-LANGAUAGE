#include <stdio.h>
#include <string.h>

int main()
{
    // *******************************************************************************************************
    // returns the length of the string
    char str[] = "anurag kumar";
    int x = strlen(str);
    printf("%d\n", x);

    // ********************************************************************************************************
    // copies the content of strings s1 to s2
    char s1[20] = "anurag kumar";
    char s2[20];
    strcpy(s2, s1);
    printf("%s\n", s1);
    s2[6] = 'u';
    printf("%s\n", s2);

    // **********************************************************************************************************
    // concat a1 string with a2 and stores the rsult in a1
    char a1[20]="anurag";
    char a2[20]="kumar";
    strcat(a1,a2);
    printf("%s",a1);
    //************************************************************************************************************
    return 0;
}