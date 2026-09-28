#include <stdio.h>
int main()
{
          int a,b,temp;
          a=9;
          b=7;
          printf ("the value of a is %d",a);
          printf ("the value of b is %d",b);
          
          temp=a;
          a=b;
          b=temp;
          printf ("the value of a is %d",a);
          printf ("the value of b is %d",b);
          
        return 0;
}   
     
