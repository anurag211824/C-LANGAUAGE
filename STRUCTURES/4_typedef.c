#include <stdio.h>
#include <string.h>
typedef float realnumber;
int main()
{
    int x;
    realnumber y = 3.12;
    printf("%f\n", y);
    // *****************************************************************************************
    typedef struct book
    {
        char name;
        int numberofpages;
        int price;
    };
    struct book a;
    struct book b;
   struct book c;
    a.price = 34;
    printf("%d", a.price);

    return 0;
}