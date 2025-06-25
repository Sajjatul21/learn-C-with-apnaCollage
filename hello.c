#include <stdio.h>
// array is a pointer
int main()
{
    int aadhar[5];

    //    input
    int *pointer = &aadhar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index: ", i);
        scanf("%d", &aadhar[i]);
    }

    // output
    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d \n", i, aadhar[i]);
    }

    return 0;
}
