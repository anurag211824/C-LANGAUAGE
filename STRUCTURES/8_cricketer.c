#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct cricketer
    {
        char name[20];
        int age;
        int no_of_matches;
        float average;
    } cricketer;
    int n;
    printf("enter the number 0f cricketers:");
    scanf("%d", &n);
    cricketer arr[n];
    // enetring details of cricketers
    for (int i = 0; i < n; i++)
    {
        printf("student:%d\n", i + 1);
        printf("enetr the name of cricketer:");
        scanf("%s", arr[i].name);
        printf("enetr the age of cricketer:");
        scanf("%d", &arr[i].age);
        printf("enetr the number of matches played:");
        scanf("%d", &arr[i].no_of_matches);
        printf("enetr the average of cricketer:");
        scanf("%f", &arr[i].average);
    }
    printf("\n");
    printf("cricketers details\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("name: %s\n", arr[i].name);
        printf("age: %d\n", arr[i].age);
        printf("no of matches: %d\n", arr[i].no_of_matches);
        printf("average: %f\n", arr[i].average);
        printf("\n");
    }
    return 0;
}