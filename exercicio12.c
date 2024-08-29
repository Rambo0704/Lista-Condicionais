#include <stdio.h>

int main(){
	
	float conta,saldo,debito,credito,saldoatual;
	
	printf("Digite o numero da conta:\n");	
	scanf("%f",&conta);
	
	printf("Digite o saldo da conta:\n");
	scanf("%f",&saldo);
	
	printf("Digite o debito da conta:\n");
	scanf("%f",&debito);
	
	printf("Digite o credito da conta:\n");
	scanf("%f",&credito);
	
	saldoatual = saldo - debito + credito;
	printf("Conta: %2.f\nSaldo atual: %.2f\n",conta,saldoatual);
	
	if (saldoatual>=0){
		printf("SALDO POSITIVO");
	} else {
		printf("SALDO NEGATIVO");
	}
	
	return 0;
}
