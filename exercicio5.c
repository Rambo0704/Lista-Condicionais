#include <stdio.h>

int main(){
	
	int ano_atual,ano_nasc,ano_voto;
	
	printf("Digite o ano atual:\n");
	scanf("%d",&ano_atual);
	
	printf("Digite o ano de nascimento:\n");
	scanf("%d",&ano_nasc);
	printf("A idade minima para votar = 16 anos\n");
	ano_voto = ano_atual - ano_nasc;
	
	if (ano_voto>=16){
		
		printf("Voce pode votar!!\n");
		
	}else {
		
		printf("Voce NAO pode votar!!\n");
		
    }
	return 0;
}
