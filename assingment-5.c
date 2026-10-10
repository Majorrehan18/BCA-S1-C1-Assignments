// program to calculate  the area and perimeter of rectangle.
#include <stdio.h>
int main()
{ int l,b;
printf("Enter lenght:");
scanf("%d",&l);
printf("Enter breadth");
scanf("%d",&b);
printf("Area =%d\n",l*b);
printf("perimeter = %d\n",2*(l+b));
return 0;
}