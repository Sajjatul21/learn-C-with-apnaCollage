#include <stdio.h>

int main()
{
    char *canChange = "Hello world";
    puts(canChange);
    canChange = "Shihab";
    puts(canChange);

    char canNotChange[] = "Hello world";
    puts(canChange);
    // canNotChange = "Sajjatul Islam";

    return 0;
}
