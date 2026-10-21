# include<stdio.h>
int main() {
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	int a=1;
	int b=1;
	int sum=1;
	for(int i =1; i<=n; i++) {
		if(i==1 || i==2) {
			printf("the %d fibnacci number is 1\n",i);
		}
		else {
		sum=a+b;
		a=b;
		b=sum;
		printf("the %dth fibanacci number is %d \n",i,sum);
		}
	}
	return 0;
}
