#include <stdio.h>

int main()
{
    char arr[6] = {'a', 'n', 'u', 'r', 'a', 'g'};
    printf("%c", arr[0]);
    printf("%c", arr[1]);
    printf("%c", arr[2]);
    printf("%c", arr[3]);
    printf("%c", arr[4]);
    printf("%c", arr[5]);
    printf("\n");
    // typecasting
    char ch = 'A';
    printf("%d", ch);
    printf("\n");
    int x = (int)ch;
    printf("%d\n", x);
    char bh = '0';
    int f = (int)bh;
    printf("%d\n", f);
    char ah = '\0';
    // \0 is a null character
    printf("%d\n", ah);
    int y = (int)ah;
    printf("%d\n", y);

    // important
    int z = 0;
    char a = (char)z;
    printf("%c", a);
    // a-------> a ke andar store ho chuka hai \0. and \0 is never printed in c language.

    // creating character array
    char brr[]={'h','e','l','l','o','\0'};
    int i=0;
    while(brr[i]!='\0'){
        printf("%c",brr[i]);
        i++;
    }

    return 0;
}