//Assignment 17 :- Writing a Program to Reverse a Given Integer (e.g., 1234 becomes 4321) and Check whether it is a Palindrome.

#include <stdio.h>
    int main()
        {
            int n,i,x,a,b,c,d,e;

            printf("Enter a Number:- ");
            scanf("%d",&n);
            c=0;
            e=n;
            a=n;
            d=n;
            x=n%10;
            b=x;
            printf("\n");
            
            for(i=1;i<=10;i++)
            {
                n=n/10;
                c=c+1;
                if(n==0)
                {
                    break;
                }
            }
            // printf("Digits:- %d\n",c);

            for(i=1;i<=c;i++)
            {
                x=(d/10);
                // printf("x = %d\n",x);
                x=x%10;
                // printf("x = %d\n",x);
                b=(b*10)+x;
                // printf("b = %d\n",b);                
                d=d/10;
                // printf("d = %d\n",d);
                a=a/10;
                // printf("a = %d\n",a);                                              
            }            

            b=b/10;
            printf("Reverse of the Number:- %d\n\n",b);

            if(e==b)
            {
                printf("It is a Palindrome.\n");
            }
            else
            {
                printf("It is not a Palindrome.\n");
            }
        return 0;
        }

// for reversing any number only.
// #include <stdio.h>
//     int main()
//         {
//             int a,b,i,x;

//             printf("Enter a No.:- ");
//             scanf("%d",&x);
//             printf("The Reverse of this No. is:- ");

//             for(i=1;i<=10;i++)
//             {
//                 b=x%10;
//                 if(b!=0)
//                 {
//                     printf("%d",b);
//                     a=x/10;
//                     x=a;
//                 }
//                 else
//                 {
//                     break;
//                 }                
//             }
//             return 0;
//         }