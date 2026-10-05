#include <stdio.h>
int main()
{
	int A;
	float c,f;
	printf("press 1 for c to f \n press 2 for f to c");
	scanf("%d",&A);
	
	if (A==1)
	{
		printf("celsius");
		scanf("%f",&c);
		f = (c*1.8)+32;
		printf("%2f degree clsius is %2f in fahrenheit",c,f);
	}
	if (A==2)
	{ 
		printf("fahrenheit");
		scanf("%f",&f);
		c = (f-32)*(0.55555);
		printf("%2f degree in fahrenheit is %2f in celsius",f,c);
	}
	return 0;
}
