#include <stdio.h>
// write a program to store the first fibonacci  numbers.

int main()
{
    int n;
    printf("Enter a n (n>2): ");
    scanf("%d", &n);

    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        printf("%d \t", fibo[i]);
    }
    printf("\n");
    return 0;
}
