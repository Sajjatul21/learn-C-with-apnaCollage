#include <stdio.h>
// Pointer Arithmetic
// Pointer can be increment & decrement
int main()
{
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u \n", ptr);
    ptr++;
    // ptr--;
    printf("ptr = %u \n", ptr);
    return 0;
}
