#include <stdio.h>

// write a function that prints salam if user is bangladesh & good if user is french..

void salam();
void good();

int main()
{
    printf("enter f for french & b for bangladesh: ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'b')
    {
        salam();
    }
    else
    {
        good();
    }
}

void salam()
{
    printf("Salam \n");
}
void good()
{
    printf("Good \n");
}