# include<stdio.h>
int main() 
{
	float p,r,t,i;
	printf("enter the initial amount:");
	scanf("%f",&p);
	printf("enter the interest earned:");
	scanf("%f",&r);
	printf("enter the duration:");
	scanf("%f",&t);
	i=(p*r*t)/100;
	printf("the simple interest is %f",i);
	return 0;
}
	
