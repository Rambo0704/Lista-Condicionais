#include <stdio.h>

int main(){
	
	int macas;
	float total;
	
	printf("Quantos macas deseja comprar?\n");
	scanf("%d",&macas);
	
	if (macas < 12){
		
		total = macas * 1.30;
		printf("Total da compra: %2.f\n",total);
		
	} else if (macas>=12) {
	
	total = macas* 1.00;
	printf("Total da compra:%2.f\n",total);

	}

	return 0;
}
