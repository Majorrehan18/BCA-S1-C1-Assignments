//Assignment 8 :- Writing a Program to Assign Grades (A,B,C,D,F) to Student's Marks Using if-else-if ladder. Taking Marks input from User.

#include <stdio.h>
    int main()
        {
            int r;
            //Criteria for Marking:- A=(90-100) ,B=(80-89) ,C=(70-79) ,D=(60-69) ,F=(0-59) .

            printf("Assigned Marks:- ");
            scanf("%d",&r);

            
            if(r<=59 && r>=0)
            {
            printf("You Got an F.");
            }
            else if(r<=69 && r>=60)
            {
            printf("You Got a D.");
            }
            else if(r<=79 && r>=70)
            {
            printf("You Got a C.");
            }
            else if(r<=89 && r>=80)
            {
            printf("You Got a B.");
            }            
            else if(r<=100 && r>=90)
            {
            printf("You Got an A.");
            }
            return 0;
        }