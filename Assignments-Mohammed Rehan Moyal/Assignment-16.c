//Assignment 16 :- Writing a Program to Print the Multiplication Table of a Given Number.

#include <stdio.h>
    int main()
        {int n,i,x;

            printf("Enter a No.:- ");
            scanf("%d",&n);

            for(i=1;i<=10;i++)
            {
                x=n*i;
                printf("%d * %d is %d\n",n,i,x);
            }
            return 0;
        }