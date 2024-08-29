#include <stdio.h>

int main(){
	
	float salariofix,salariofinal;
	int vendas;
	
	printf("Digite o salario fixo:\n");
	scanf("%f",&salariofix);
	
	printf("Digite o valor de vendas:\n");
	scanf("%d",&vendas);
	
	if (vendas <= 1500){
		
		salariofinal = salariofix +(vendas * 3/100);
	} else {
		
		salariofinal = salariofix + ((vendas - 1500)*5/100); //sobre o que ultrapassou 1500
		
	}
	printf("Salario final:%.2f \n",salariofinal);
	
	return 0;
}
