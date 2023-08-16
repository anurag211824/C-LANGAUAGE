#include <stdio.h>
#include <string.h>
typedef struct class
{
    char name[15];
    int roll;
    float percentage;
    char favsubject[15];
} student;

int main()
{
    int n;
    printf("enetr the number of student:");
    scanf("%d", &n);
    student arr[n];
    // giving the students details
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("enter the name:");
        scanf("%s", arr[i].name);
        printf("enter the roll:");
        scanf("%d", &arr[i].roll);
        printf("enter the percentage:");
        scanf("%f", &arr[i].percentage);
        printf("enter the favsubject:");
        scanf("%s", arr[i].favsubject);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i].name);
        printf("roll: %d\n", arr[i].roll);
        printf("percentage: %f\n", arr[i].percentage);
        printf("favsubject: %s\n", arr[i].favsubject);
        printf("\n");
    }

    return 0;
}