#include <stdio.h>

int main()
{
    // modifying the character array
    char urr[7] = "unurag";
    urr[1] = 'a';
    int w = 0;
    while (urr[w] != '\0')
    {
        printf("%c", urr[w]);
        w++;
    }
    return 0;
}