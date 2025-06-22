#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("adult \n");
        printf("you can vote \n");
        printf("you can drive");
    }
    else
    {
        printf("not adult");
    }
}