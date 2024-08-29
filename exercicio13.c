#include <stdio.h>

int main(){
	
	int estoqueatual,estoquemax,estoquemin,quantmedia;
	
	printf("Digite a quantidade atual em estoque:\n");
	scanf("%d",&estoqueatual);
	
	printf("Digite a quantidade maxima em estoque:\n");
	scanf("%d",&estoquemax); 
	
	printf("Digite a quantidade minima em estoque:\n");
	scanf("%d",&estoquemin);
	
	quantmedia = (estoquemax + estoquemin)/2;
	printf("Quantidade Media: %d\n",quantmedia);
	
	if (estoqueatual>=quantmedia){
		
		printf("NAO EFETUAR COMPRA!!\n");
		
	}else{
		
		printf("EFETUAR COMPRA!!\n");
		
	}
	
	return 0;
}
