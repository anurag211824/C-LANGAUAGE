#include <stdio.h>
void display();/*fuction prototype*/
int main()
{
    int a;
    printf("my name is anurag kumar\n");
    display(); /*function calling*/
    printf("display function finished its work\n");
    return 0;
}
void display()
{

    printf("this is a display\n");/*function definition*/
}