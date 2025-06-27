#include <stdio.h>
#include <string.h>

// write a  program to store the data of 3 student;
struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student ece[100];
    ece[0].roll = 4060;
    ece[0].cgpa = 4.00;
    strcpy(ece[0].name, "Sajjatul");

    printf("name = %s \n", ece[0].name);
    printf("roll = %d\n", ece[0].roll);
    printf("cgpa  = %f\n", ece[0].cgpa);

    struct student cse[100];
    cse[1].roll = 244;
    cse[1].cgpa = 5.33;
    strcpy(cse[1].name, "Shihab");

    printf("name = %s\n", cse[1].name);
    printf("roll = %d\n", cse[1].roll);
    printf("cgpa = %f\n", cse[1].cgpa);

    return 0;
}
