#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    int sum = a + b;
    printf("Sum is %d \n", sum);
    printf("Sum is %d \n", a - b);
    printf("Sum is %d \n", a * b);

    return 0;
}