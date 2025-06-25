#include <stdio.h>
// write a function to calculate the sum, product & average of 2 number. Print the average in the main function.
void doWork(int a, int b, int *sum, int *prod, int *ave);

int main()
{
    int a = 4, b = 2;
    int sum, prod, ave;
    doWork(a, b, &sum, &prod, &ave);
    printf("sum = %d \nprod = %d\nave = %d", sum, prod, ave);
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *ave)
{
    /* int sum = a + b;
    int prod = a * b;
    int ave = (a + b) / 2; */
    *sum = a + b;
    *prod = a * b;
    *ave = (a + b) / 2;
}