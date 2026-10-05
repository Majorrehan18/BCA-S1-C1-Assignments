//Assignment 7 :- Writing a Program to find largest of the Three Numbers.

#include <stdio.h>
    int main()
    {   
        int n1,n2,n3;

        printf("Enter the First No.:- ");
        scanf("%d",&n1);

        printf("Enter the Second No.:- ");
        scanf("%d",&n2);

        printf("Enter the Third No.:- ");
        scanf("%d",&n3);

        if(n1>n2)
            { 
                if(n1>n3)
                {
                printf("First No.(Which is %d) is the Largest.",n1);
                }
            }
        
        if(n2>n1)
            { 
                if(n2>n3)
                {
                printf("Second No.(Which is %d) is the Largest.",n2);
                }
            }

        if(n3>n1)
            { 
                if(n3>n2)
                {
                printf("Third No.(Which is %d) is the Largest.",n3);
                }
            }
        return 0;
    }




    
// #include <stdio.h>
//     int main() 
//     {
//         int a, b, c, largest;

//         printf("Enter the First No.:- ");
//         scanf("%d",&a);

//         printf("Enter the Second No.:- ");
//         scanf("%d",&b);

//         printf("Enter the Third No.:- ");
//         scanf("%d",&c);
        
//         largest = a;

//         if(b>largest) 
//             {
//                 largest = b;
//             }

//         if(c>largest) 
//             {
//                 largest = c;
//             }

//         printf("Largest number = %d", largest);

//         return 0;
//     }