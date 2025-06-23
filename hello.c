#include <stdio.h>
int main()
{
    // print the factorial of a number n;
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("final factorial %d", fact);

    return 0;
}
