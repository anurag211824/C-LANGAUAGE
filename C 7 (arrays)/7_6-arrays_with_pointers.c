#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("enter the marks for student %d:", i + 1);
        scanf("%d", ptr+i);
       
    }
    for (int i = 0; i < 4; i++)
    {
        // printf("the marks of student %d is %d\n", i + 1, *(ptr+i));
          printf("the marks of student %d is %d\n", i + 1, marks[i]);
    }
    return 0;
}