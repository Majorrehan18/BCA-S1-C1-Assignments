#include <stdio.h>

int main()
{
    int n;

    printf("Enter 1, 2 or 3: ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("Hello");
            break;

        case 2:
            printf("Welcome");
            break;

        case 3:
            printf("Goodbye");
            break;

        default:
            printf("Wrong choice");
    }

    return 0;
}