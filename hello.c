#include <stdio.h>

int main()
{

    int age = 22;
    int * pointer = &age;
    printf("%u \n", &age);
    printf("%u \n", pointer);
    printf("%d \n", *pointer);
    printf("%u \n",&pointer);

  /*   printf(" normal %d\n", age);
    printf(" normal %p\n", &age);
    int *ageMl = &age;
    printf("age memory location %p \n", ageMl); 

    int *pointer = &age;
    printf("age memory location %p \n", pointer);
    printf("age memory location %p \n", *pointer); */
    // printf("%d", *(&age));

    /*  int age = 22;
     int *ptr = &age; */

    // value;
    /*    printf("%d \n", age);

       printf("%d \n", *ptr);
       printf("%d \n", *(&age)); */

    return 0;
}
