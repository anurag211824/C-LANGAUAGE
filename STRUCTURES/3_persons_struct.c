#include <stdio.h>
#include <string.h>

int main()
{
    struct person
    {
        char name[50];
        int salary;
        int age;
    } p1, p2;

    strcpy(p1.name, "ragahv");
    p1.age = 30;
    p1.salary = 60000;


    strcpy(p2.name,"anurag");
    p2.age=21;
    p2.salary=40000;

    printf("name of first person %s\n",p1.name);
    printf("age of sedcond person %d",p2.age);
    return 0;
}