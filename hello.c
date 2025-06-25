#include <stdio.h>
// Pointer Arithmetic
// Pointer can be increment & decrement
int main()
{
    float price = 100.00;
    float *ptr = &price;
    printf("ptr = %u \n", ptr);
    ptr++;  // float size 4 byte. increment 4 byte in memory address
    printf("ptr = %u \n", ptr);
    ptr--; // float size 4 byte. increment 4 byte in memory address
    printf("ptr = %u \n", ptr);
    return 0;
}
