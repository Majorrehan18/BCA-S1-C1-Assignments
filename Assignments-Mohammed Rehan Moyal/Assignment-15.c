//Assignment 15 :- Writing a Program to Generate the Fibonacci Series (0,1,1,2,3,5,8,13...) up to N terms using a loop.

#include <stdio.h>
    int main()
    {   
        int s,e,i,x;

        printf("Enter the Ending (N) of the Series:- ");
        scanf("%d",&e);

        s=0;
        printf("%d ",s);

        for (i=s+1;i<=e;i=x+s)
        {
            x=s;
            s=i;
            printf("%d ",i);
        }
        
        return 0;
    }