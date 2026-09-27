//Assignment 13 :- Writing a Program to Print All prime numbers between 1 and N, where N is entered by the user.

#include <stdio.h>
    int main()
        {
            int e,n,i,x;

            printf("Enter the Value of N:- ");
            scanf("%d",&e);

            for (i=2;i<=e;i++)
            {
                n=1;
                for(x=2;x<i;x++)
                {
                    if(i%x==0)
                    {
                        n=0;
                        break;
                    }
                }

                if(n==1)
                {
                    printf("%d\n", i);
                }
            }
            return 0;
        }


    // #include <stdio.h>
    // int main()
    // {   
    //     int s,e,n,i,x;

    //     printf("Enter the Starting of the Range:- ");
    //     scanf("%d",&s);
    //     printf("Enter the Ending of the Range:- ");
    //     scanf("%d",&e);

    //     for (n=s;n<=e;n++) //the part where prime no. range is looped
    //     {
    //         for (x=2;x<n;x++) //the part where Divisor is looped
    //         {
    //             i=1;
    //             if(n%x==0)
    //             {
    //                 i=0;
    //                 break; //This is the important part. Which Breaks the loop.
    //             }
    //         }
    //     if(i==1)
    //     {
    //     printf("%d\n",n);
    //     }
    //     }

    //     return 0;
    // }