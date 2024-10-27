#include<stdio.h>
int main(){
	float principal, rate, time;
	printf(" amount:");
	scanf("%f", &principal);
	printf(" rate percentage:");
	scanf("%f", &rate);
	printf(" time:");
	scanf("%f",&time);
	
	float intrest = (principal*rate*time)/100;
	printf("intresr: %f", intrest);	
	
}