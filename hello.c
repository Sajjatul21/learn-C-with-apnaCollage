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
    struct student s1;
    strcpy(s1.name, "Sajjatul");
    s1.roll = 01;
    s1.cgpa = 4.00;

    printf("student name = %s \n", s1.name);
    printf("student roll = %d \n", s1.roll);
    printf("student cgpa = %f \n", s1.cgpa);

    struct student s2;
    strcpy(s2.name, "Shihab");
    s2.roll = 378482;
    s2.cgpa = 3.25;
    printf("student name = %s \n", s2.name);
    printf("student roll = %d \n", s2.roll);
    printf("student cgpa = %f \n", s2.cgpa);

    
    struct student s3;
    strcpy(s3.name, "Sourob");
    s3.roll = 4060;
    s3.cgpa = 4.3;
    printf("student name = %s\n", s3.name);
    printf("student roll = %d \n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);
    return 0;
}
