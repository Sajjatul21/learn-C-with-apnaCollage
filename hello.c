#include <stdio.h>
// will the address output are same?
void printAddress(int n);

int main()
{
    int n = 4;
    printAddress(n);
    printf("Address of n is: %d \n", &n);
    return 0;
}

void printAddress(int n)
{
    printf("Address of n is: %d \n", &n);
}