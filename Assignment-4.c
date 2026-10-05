//Assignment 4 :- Writing a Program to Calculate the Area and Circumference of a Circle. Taking the Radius as input from the user.

#include <stdio.h>
    int main()
    {
        int r;
        float a, c;
        printf("Enter the Radius:- ");
        scanf("%d",&r);
        a= (3.141)*r*r;
        c= 2*(3.141)*r;
        printf("Area = %.2f,\nCircumference = %.2f;",a,c);

        return 0;
    }