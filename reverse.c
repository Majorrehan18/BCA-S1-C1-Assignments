# include<stdio.h>
int main() {
	int n,temp;
	printf("enter a number:");
	scanf("%d",&n);
	temp=n;
	int r=0;
	while(n!=0) {
		r=r*10;
		r=r+(n%10);
		n=n/10;
	}
	printf("the reverse of number is %d\n",r);
	if(r==temp) { 
	   printf(" the no. is pallindrome");
	}
	else {
		printf(" the no. is not pallindrome");
	}
	return 0;
}
