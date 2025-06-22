#include <stdio.h>
int main()
{
    // write a program to check if a number is divisible by 2 or not;

    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}