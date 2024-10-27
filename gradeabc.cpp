#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a number\n");
    scanf("%d",&b);	
	printf("Enter a number\n");
    scanf("%d",&c);
    float average =(a+b+c)/3;
    printf("average: %f",average);
    
    if("average>=90"){
    printf("\n Grade:A+ very excellent");
	}
    else if("average >=80"){
    printf("\n Grade:A excellent");                                                       
	}
    else if("average>=70"){
	printf("\n Grade:B Good");
}
    else if("average>=60"){            
	printf("\n Grade:C keep it up");
}
	else if("average<=60"){
	 printf("you are fail");	}
    
    
    
    
    
    
    
    
    
    
    
}