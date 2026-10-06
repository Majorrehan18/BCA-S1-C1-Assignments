#include <stdio.h>
int main()
{
	float radius, area, circumference;
	const float PI=3.14159;
 
  printf("Enter the radius oF the circle: ");
  scanf("%f", & radius);
  area=PI* radius* radius;
  cicumference= 2*PI * radius;
  
   printf("Area= %2f\n", area);
   printf("Circumference= %2f\n", circumference);
   return 0;
 }  
 
