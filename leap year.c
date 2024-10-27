int main(){
	int number;
	printf("enter your number \n");
	scanf("%d" ,&number);
	if(number %4 == 0){
	printf("your number is leap year\n",number);	
}
else {
printf("your number is no leap year \n",number);  
}
}