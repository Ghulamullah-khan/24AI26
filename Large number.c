    #include<stdio.h>
	int main(){
	int num1,num2,num3;
	printf("enter your number \n");
	scanf("%d" ,&num1);
	printf("enter your number \n");
	scanf("%d",&num2);
	printf("enter your number\n");
	scanf("%d",&num3);
	if(num1>=num2 &&num2>=num3){
	
	printf(" your large number: %d",num1 );}
	
	else if (num2>=num1 && num2>=num3)
	{printf("large value is:%d",num2);
	
	}
	else {
		printf("large value is:%d",num3);
	}
	
		
	}
	
	
	

