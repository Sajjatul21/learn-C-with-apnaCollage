#include <stdio.h>
int main()
{
    // print the numbers from 0 to n , if n is given by user

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }

    return 0;
}
