#include <stdio.h>
int main()
{
    int a = 4;
    int b = 2;
    a += b; // a = a+b
    printf("%d \n", a);
    a -= b; // a = a-b
    printf("%d \n", a);
    a *= b; // a = a*b
    printf("%d \n", a);
    a %= b; // a = a%b
    printf("%d \n", a);
    return 0;
}