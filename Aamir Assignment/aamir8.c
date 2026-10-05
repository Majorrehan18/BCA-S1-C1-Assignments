#include <stdio.h>
int main ()
{ 
	int n1,n2,n3;
	n1 = 5;
	n2 = 2;
    n3 = 3;
    printf("%d is largest\n %d is largest\n %d is largest",n1,n2,n3); 
    
    if (n1>n2&&n1>n3)
	  printf("1st is largest\n");
  
   if (n2>n3&&n2>n1)
   printf("2nd is latgest\n");

   if (n3>n1&&n3>n2)
	  printf("3rd is largest\n");
  
  return 0; 
}
