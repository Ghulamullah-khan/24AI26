#include<stdio.h>
int main(){
	float num1;
	printf(" total shoping amount:");
	scanf("%f",&num1);
	
	if(num1 >=5000){
		printf(" discount amount is %f ",(num1*20)/100);
	}
	else if(num1 >3000)
	{
		printf("finally discount amount is %f", (num1*10)/100);
	}
	
	else if(num1 <3000){
		printf("SORRY THERE IS NO ANY DISCOUNT:");
	}
}