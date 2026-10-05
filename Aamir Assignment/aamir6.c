#include <stdio.h>
int main()
{
	float l,b,a,p;
	printf("enter value of l");
	scanf("%f",&l);
	printf("enter value of b");
	scanf("%f",&b);
	a = l*b;
	p = 2*(l+b);
   	printf("area =%2f\n perimiter =%2f\n",a,p);
	return 0;
}
