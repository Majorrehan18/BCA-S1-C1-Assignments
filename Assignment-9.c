//Assignment 9 :- Writing a Program to demonstrate the use of switch-case statement.

#include <stdio.h>
    int main()
        {
            int r;

            printf("Assigned Marks:- ");
            scanf("%d",&r);

            
            if(r<=100 && r>=0)
            {
                switch(r)
                {
                case 0 ... 49:
                printf("You Failed.");
                break;

                case 50 ... 100:
                printf("You Passed.");
                break;
                }
            }
            else
            {
                printf("Invalid Input");
            }

            return 0;
        }