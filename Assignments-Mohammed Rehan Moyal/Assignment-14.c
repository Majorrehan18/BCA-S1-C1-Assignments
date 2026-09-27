//Assignment 14 :- Writing a Program to Find the Factorial of a Given Number using a loop.

#include <stdio.h>
    int main()
    {   
        int n,i;

        printf("Enter The Number for Factorial:- ");
        scanf("%d",&n);

        for (i=n-1;i>=1;i--)
        {
            n=n*i;
        }
        printf("%d",n);
        return 0;
    }