#include <stdio.h>

// pointer in function call
// call by value
// call by reference

void square(int n);

int main()
{
    int number = 4;
    square(number);  // pass by value
    printf("number: %d \n", number);
}
// call by value
void square(int n)
{
    n = n * n;
    printf("Square: %d \n", n);
}
