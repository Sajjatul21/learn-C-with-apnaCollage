#include <stdio.h>
// 2D array
void printNumbers(int *arr, int n);

int main()
{
    int marks[2][3]; // 2 students 3 subjects;

    // first student
    marks[0][0] = 90;
    marks[0][1] = 97;
    marks[0][2] = 98;

    // second student
    marks[1][0] = 80;
    marks[1][1] = 89;
    marks[1][2] = 99;

    printf("%d \n", marks[0][0]);
    printf("%d \n", marks[1][0]);
    return 0;
}
