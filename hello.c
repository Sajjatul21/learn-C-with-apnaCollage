#include <stdio.h>

int main()
{
    int x;
    int *pointer;
    pointer = &x;
    *pointer = 0;
    printf("x value: %d\n", x);              // 0
    printf("pointer value: %d\n", *pointer); // 0

    *pointer = +5; 
    printf("x value: %d\n", x);              // 5
    printf("pointer value: %d\n", *pointer); // 5

    (*pointer)++;
    printf("x value: %d\n", x);              // 6
    printf("pointer value: %d\n", *pointer); // 6

}
