//Assignment 6 :- Writing a Program to Convert Temperature from Celsius to Fahrenheit and Fahrenheit to Celsius. Taking the Temperature input from the user.

#include <stdio.h>
    int main()
    {
        int A;
        float c,f;

        printf("Press 1 for Celsius to Fahrenheit\nPress 2 for Fahrenheit to Celsius:- ");
        scanf("%d",&A);
        
        if(A==1)
        {
            printf("Celsius:- ");
            scanf("%f",&c);
            f=(c*1.8)+32;
            printf("%.2f degree Celsius in Fahrenheit is %.2f",c,f);
        }
        if(A==2)
        {
            printf("Fahrenheit:- ");
            scanf("%f",&f);
            c=(f-32)*(0.55555);
            printf("%.2f degree Fahrenheit in Celsius is %.2f",f,c);

        }

        if(A != 1 && A!= 2)
        {
            printf("-------> Invalid Input <-------");
        }

        return 0;
    }