#include<stdio.h>
int main(){
	float a,b;
	char operator;
	printf("enter your first value");
	scanf("%f",&a);
	printf("enter your second value");
	scanf("%f",&b);
	printf("enter your operator (+,-,*,/):");
	scanf(" %c",&operator);
	
	if(operator == '+') {
		
		printf("result is %f", a + b);
	}
	if(operator == '-') {
		
		printf("result is %f", a - b);
	}if(operator == '*') {
		
		printf("result is %f", a * b);
	}if(operator == '/') {
		
		printf("result is %f", a / b);
	}
}