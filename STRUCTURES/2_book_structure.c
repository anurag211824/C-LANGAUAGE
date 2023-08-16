#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[100];
        int no_of_pages;
        float price;
    } a, b, c;
    a.no_of_pages = 100;
    a.price = 411.5;
    strcpy(a.name, "secret seven");

    printf("%d ", a.no_of_pages);
    printf("%.2f ", a.price);
    printf("%s ", a.name);
    printf("\n");

    b.no_of_pages = 200;
    b.price = 100;
    strcpy(b.name, "famous five");

    printf("%d ", b.no_of_pages);
    printf("%.2f ", b.price);
    printf("%s ", b.name);

    return 0;
}