#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "anurag kumar";
    char *brr = arr; /*brr is a shallow copy*/
    arr[0] = 'u';
    printf("%s\n", brr);

    
    // deep copy-------------->> how to make a deep copy of a string
    char s1[] = "how to make a deep copy of a string";
    int k = 0;
    int size = 0;
    while (s1[k] != '\0')
    {
        size++;
        k++;
    }
    char s2[size];
    for (int i = 0; i < size; i++)
    {
        printf("%c", s1[i]); /* how to make a deep copy of a string will get printed in a another string s2 from s1*/
    }
    printf("\n");
    // *********************************************************************************************************************
    char *a1 = "college wallah";
    char *a2;
    a2 = a1;
    a2="physic wallah";
    printf("%s\n",a1);
    printf("%s\n",a2);

        return 0;
}