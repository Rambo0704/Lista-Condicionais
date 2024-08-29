#include <stdio.h>

int main(){
	
	float a,b;
	
	printf("Digite um valor:\n");
	scanf("%f",&a);
	
	printf("Digite um valor:\n");
	scanf("%f",&b);
	
	if(a>b){
		
		printf("O maior numero:%2.f\n",a);
		
	}else if(b>a){
		
		printf("O maior numero :%2.f\n",b);
		
	}
	
	return 0;
}
