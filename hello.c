#include <stdio.h>

void printHw(int count);

int main()
{
    printHw(5);
    return 0;
}

// recursive function
void printHw(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World \n");
    printHw(count - 1);
}