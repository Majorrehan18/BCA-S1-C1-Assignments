//Assignment 10 :- Writing a Program to check whether a given number is Even or Odd.

#include <stdio.h>
    int main()
    {   
        int n;

        printf("Enter A No.:- ");
        scanf("%d",&n);

        if(n%2==0)
        {
            printf("Given No.\"%d\" is Even.",n);
        }
        else 
        {
            printf("Given No.\"%d\" is Odd.",n);
        }

        // switch(n%2)
        // {
        //     case 0:
        //     printf("Given No.\"%d\" is Even.",n);
        //     break;
        //     case 1:
        //     printf("Given No.\"%d\" is Odd.",n);
        //     break;

        // }
 
        return 0;
    }