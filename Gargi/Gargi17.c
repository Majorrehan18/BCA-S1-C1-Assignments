#include <stdio.h>
int main()
{
    int n, original, reverse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    printf("Reverse = %d\n", reverse);

    if(original == reverse)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");

    return 0;
}
