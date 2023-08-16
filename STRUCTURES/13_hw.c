#include <stdio.h>
#include <string.h>
typedef struct student
{
    int roll_number;
    char name[20];
    char lastname[20];
    char department[20];
    char course[20];
    int year;
} student;
void check(student x, student y)
{
   if(strcmp(x.department,y.department)==0)
   printf("both of them have same string");

    else
    {
        printf("both of them have different departments");
    }
}

int main()
{ student s1;
strcpy(s1.department,"Computer");
student s2;
strcpy(s2.department,"computer");
check(s1,s2);
    return 0;
}