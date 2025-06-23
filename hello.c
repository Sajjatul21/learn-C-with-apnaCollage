#include <stdio.h>
int main()
{
    // keep taking numbers as input from user until user enters an odd numbers;
    int n;
    do
    {
        printf("Enter number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    return 0;
}
