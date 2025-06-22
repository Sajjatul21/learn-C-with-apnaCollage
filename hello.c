#include <stdio.h>
int main()
{
    printf("%d \n", 5 < 6 && 3 < 4);
    printf("%d \n", !(5 < 6 || 5 < 2));
    return 0;
}