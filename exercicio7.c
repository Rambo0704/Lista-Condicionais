#include <stdio.h>

int main(){
	float num1,num2;
	printf("Digite um numero:\n");
	scanf("%f",&num1);
	
	printf("Digite outro numero:\n");
	scanf("%f",&num2);
	
	if(num1>num2){
		
		printf("%.2f,%.2f",num2,num1);
		
	}else if(num2>num1){
		
		printf("%.2f,%.2f",num1,num2);
		
	}
	
	return 0;
}
