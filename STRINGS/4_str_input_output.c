#include <stdio.h>
#include <string.h>

int main()
{
    // // ordinary way of taking string input and output using loops
    // char arr[4];
    // printf("give your string:");
    // for (int i = 0; i < 4; i++)
    // {

    //     scanf("%c", &arr[i]);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c", arr[i]);
    // }

    // // another rway of taking string input and output

    // // char brr[20];
    // // scanf("%s", &brr); /* only the first word will be considered*/
    // // printf("your input was :%s",brr);

    // input and output using gets and puts function ------------------->>>we can print entire sentence

    // char str[45];
    // puts("enter your string");
    // gets(str);
    // puts(str);

    char string[50];
    printf("enetr your string");
    scanf("%[^\n]s", string);
    printf("%s", string);
    return 0;
}