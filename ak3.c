#include<stdio.h>
int main ()
{
	int a , b , c;
	
	printf("enter a first number:");
	scanf("%d",&a);
	printf("enter a second  number:");
	scanf("%d",&b);
	printf("enter a third number:");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("first number is big");
	}
	else if (b>a && b>c ){
		printf(" second number is big :");
	}
	else {
		printf("third number is big :");
	}
	return 0;
}
