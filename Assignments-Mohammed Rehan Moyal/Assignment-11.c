//Assignment 11 :- Writing a Program to check whether a given number is positive, negative, or zero.

#include <stdio.h>
    int main()
    {   
        int n;

        printf("Enter A No.:- ");
        scanf("%d",&n);

        if(n<0)
        {
            printf("Given No.\"%d\" is Negative.",n);
        }
        else if(n==0)
        {
            printf("Given No. is Zero.",n);
        }
        else if(n>0)
        {
            printf("Given No.\"%d\" is Positive.",n);
        }

        return 0;
    }