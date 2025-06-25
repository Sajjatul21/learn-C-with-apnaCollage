#include <stdio.h>

int main()
{

    // print the value of i from its pointer to pointer;
    int i = 5;
    int *pointer = &i;
    printf("%p \n", pointer);  // (&) address : 0061FF18
    printf("%d \n", *pointer); // (*) value of address: 5

    // pointer to pointer
    int **pointerToPointer = &pointer;
    printf("%p \n", pointerToPointer);   // (&) address
    printf("%p \n", *pointerToPointer);  // (*) value of address
    printf("%d \n", **pointerToPointer); // (**) value of address pointer to pointer
}
