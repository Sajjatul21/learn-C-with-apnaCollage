#include <stdio.h>
// Pointer Arithmetic
// Pointer can be increment & decrement
int main()
{
    char has = '#';
    char *ptr = &has;
    printf("ptr = %u \n", ptr);
    ptr++;  // character size 1 byte. increment 1 byte in memory address
    printf("ptr = %u \n", ptr);
    ptr--; // character size 1 byte. decrement 1 byte in memory address
    printf("ptr = %u \n", ptr);
    return 0;
}
