#include <stdio.h>

int main()
{
    int marks[3];

    printf("Enter phy: ");
    scanf("%d", &marks[0]);
    printf("Enter chem: ");
    scanf("%d", &marks[1]);
    printf("Enter math: ");
    scanf("%d", &marks[2]);

    printf("Phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[3]);
    return 0;
}
