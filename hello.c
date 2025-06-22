#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);
    printf("memory address %p",&age);
    return 0;
}