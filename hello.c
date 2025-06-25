#include <stdio.h>

int main()
{
    // pointer to pointer : A variable that store the memory address to another variable;
    float price = 100.00;
    float *price = &price;
    float **price = &price;
}
