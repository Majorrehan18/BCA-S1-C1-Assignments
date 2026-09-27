//Assignment 12 :- Writing a Program to check whether a given character is a Vowel or Consonant.

#include <stdio.h>
    int main()
    {   
        char l;

        printf("Enter A Letter:- ");
        scanf("%c",&l);

        if ((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z')) 
        {

            if((l=='a')||(l=='e')||(l=='i')||(l=='o')||(l=='u')||
               (l=='A')||(l=='E')||(l=='I')||(l=='O')||(l=='U'))
            {
                printf("Given Letter \"%c\" is Vowel.",l);
            }
            else
            {
                printf("Given Letter \"%c\" is Consonant.",l);
            }
        }
        else
        {
            printf("\"%c\" is not an Alphabetic Letter.", l);
        }
        
        return 0;
    }