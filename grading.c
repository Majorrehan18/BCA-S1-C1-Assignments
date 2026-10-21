# include<stdio.h>
int main() {
	float percent;
	printf("enter your percentage");
	scanf("%f",&percent);
	if (percent>91){
		printf("excellent");
	}
	else if (percent>81){
		printf("very good");
	}
	else if (percent>71){
		printf(" good");
	}
	else if (percent>61){
		printf("can do better");
	}
	else if (percent>51){
		printf("average");
	}
	else{
		printf("fail");
	}
	return 0;
}
	
