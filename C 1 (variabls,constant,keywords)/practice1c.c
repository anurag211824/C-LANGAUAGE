#include <stdio.h>

int main()
{
    int radius = 2;
    int height = 8;
    float pie = 3.14;

    printf("the area of circle is  %f \n", radius * radius * pie);
    printf("the volume of cylinder is %f \n", pie * radius * radius * height);

    return 0;
}