#include <stdio.h>
int main() 
{
	int r;
	float a,c;
	printf("enter radius");
	scanf("%d",&r);
    a = (3.141)*r*r;
    c = 2*(3.141)*r;
    printf("area = %2f\n circumference = %2f\n",a,c);
    return 0;
}
