#include <stdio.h>
// Swap 2 numbers, a&b
void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 3;
    int y = 5;
    swap(x, y);
    printf("x = %d & x = %d \n", x, y);

    // pass by reference
    _swap(&x, &y);
    printf("x = %d & x = %d \n", x, y);
    return 0;
}

// call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d & b = %d \n", a, b);
}
// call by reference
void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    // printf("a = %d & b = %d \n", a, b);
}