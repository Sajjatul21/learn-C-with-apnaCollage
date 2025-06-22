#include <stdio.h>
int main()
{
    int day; // monday=1, tuesday=2, wednesday=3
    printf("enter your day: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("monday \n");
        break;
    case 2:
        printf("tuesday \n");
        break;
    case 3:
        printf("wednesday \n");
        break;
    case 4:
        printf("thursday \n");
        break;
    case 5:
        printf("friday");
        break;

    case 6:
        printf("thursday \n");
        break;
        default: printf("not a valid day");
    }

    return 0;
}
