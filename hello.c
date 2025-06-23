#include <stdio.h>

// function declaration/ function prototype
void printHello(); // void means no return in this function
int main()         // int means its return integer value;
{
    printHello();
    printHello();
    return 0;
}

void printHello() // function definition
{
    printf("Hello! \n");
}
