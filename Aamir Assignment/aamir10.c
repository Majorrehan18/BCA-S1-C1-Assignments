#include <stdio.h>
int fun();
int main()
{
	int x,y,z;
	x=10;
	y=20;
	
	z = fun();
	z = x+y;
	printf("\n%d",z);
}
 int fun()
{	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	//x=111;
	//y=112;
	z=x+y;
	printf("%d",z);
	return z;
}

    
