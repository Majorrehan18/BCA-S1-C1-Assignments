//Assignment 5 :- Writing a Program to Calculate the Area and Perimeter of a rectangle. Taking the legth and breadth as input from the user.

#include <stdio.h>
    int main()
    {
        float l,b,a,p;
        printf("Enter the Length:- ");
        scanf("%f",&l);
        printf("Enter the Breadth:- ");
        scanf("%f",&b);

        a= l*b;
        p= 2*(l+b);
        printf("Area = %.2f,\nPerimeter = %.2f;",a,p);

        return 0;
    }