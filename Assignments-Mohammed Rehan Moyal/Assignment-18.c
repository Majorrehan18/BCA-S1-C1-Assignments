//Assignment 18 :- Writing a Program to check whether a given number is an Armstrong number (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, and 153 [(1^3)+(5^3)+(3^3)].

//Assignment 18 :- Writing a Program to check whether a given number is an Armstrong number (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, and 153 [(1^3)+(5^3)+(3^3)].

#include <stdio.h>
#include <math.h>
    int main()
        {
            int n,a,b,i,x,c,j;

            printf("Enter a No.:- ");
            scanf("%d",&n);

            c=0;
            x=n;

            for(i=1;i<=n;i++)
            {
                x=x/10;
                c=c+1;
                if(x==0)
                {
                    break;
                }
            }
            // printf("Digits:- %d\n",c);

            a=n%10;
            b=n;
            j=pow(a,c);
            
            for(i=1;i<=c;i++)
            {            
                b=b/10;
                a=b%10;

                j=j+pow(a,c);
                // printf("j %d\n",j);                
            }
            if(n==0)
            {
                printf("This is an Armstrong Number.");
            }
            else if(n==j)
            {
                printf("This is an Armstrong Number.");
            }
            else
            {
                printf("This is not an Armstrong Number.");
            }
            return 0;            
        }