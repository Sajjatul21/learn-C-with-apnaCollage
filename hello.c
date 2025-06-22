#include <stdio.h>
int main()
{
    // Conditional operator
    // Ternary
    // condition ? do something if True: do something if False;
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    age >= 18 ? printf("adult \n") : printf("not adult \n");
    return 0;
}