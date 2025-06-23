#include <stdio.h>
int main()
{
    // Print the sum of first n natural number. also print them in reverse;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    /*
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        printf("Sum is %d\n", sum);

        for (int j = n; j >= 1; j--)
        {
            printf("%d \n", j);
        }
     */

    int sum = 0;
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("Sum is %d\n", sum);

    return 0;
}
