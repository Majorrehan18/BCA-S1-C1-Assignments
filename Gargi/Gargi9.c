#include <stdio.h>

int main()
{
    int r;
    printf("Assigned Marks: ");
    scanf("%d", &r);

    switch (r / 10)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("You failed");
            break;

        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("You passed");
            break;
    }

    return 0;
}
