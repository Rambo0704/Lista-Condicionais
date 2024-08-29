#include <stdio.h>

int main(){
	
	float n1,n2,media;
	
	printf("Digite a nota 1:\n");
	scanf("%f",&n1);
	
	printf("Digite a nota 2:\n");
	scanf("%f",&n2);
	
	media = (n1+n2)/2;
	
	if (media >= 7){
		
		printf("Sua media: %2.f \n",media);
		printf("APROVADO!!!");
		
	}else if (media<7){
		
	    printf("Sua media: %f\n",media);	
		printf("REPROVADO");
		
		
		
	}	
	
	return 0;
}
