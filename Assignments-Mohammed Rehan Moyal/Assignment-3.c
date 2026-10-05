//Assignment 3 :- Writing a Program to Swap Two Integers using a Temporary Variable.

#include <stdio.h>
    int main()
    {   
        int a,b,c;
        printf("Enter the value of A :- ");
        scanf("%d",&a);
        printf("Enter the value of B :- ");
        scanf("%d",&b);

        c = a;
        a = b;
        b = c;
        printf("Value of A = %d\nValue of B = %d", a, b);

        return 0;
    }

    