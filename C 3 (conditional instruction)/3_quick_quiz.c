// write a program to find grades of student on the basis of marks obtained
#include <stdio.h>

int main()
{
    int marks;
    printf("enter your marks \n");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {

        printf("your grade is A \n");
    }
    if (marks >= 80 && marks < 90)
    {

        printf("your grade is B \n");
    }
    if (marks >= 70 && marks < 80)
    {

        printf("your grade is C\n");
    }
    if (marks >= 60 && marks < 70)
    {

        printf("your grade is D \n");
    }

    return 0;
}
