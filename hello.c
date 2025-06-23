#include <stdio.h>
int main()
{
    // Print the sum of first n natural number. also print them in reverse;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    for (int j = n; j >= 1; j--)
    {
        sum = sum + j;
        printf("%d\n", j);
    }
    printf("Sum is %d", sum);

    return 0;
}
