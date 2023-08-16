#include <stdio.h>

int main()
{
    int length;
    float breadth;

    printf("what is the lengthg of rectangle ? \n");
    scanf("%d", &length);

    printf("what is the breadth of the rectangle ? \n");
    scanf("%f", &breadth);
    float area = length * breadth;
    printf("the area of rectangle is %f \n", area);

    return 0;
}