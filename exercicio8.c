#include <stdio.h>

int main(){
	
	int horain,horafim,duracao;
	
	printf("Hora de inicio:\n");
	scanf("%d",&horain);
	
	printf("Hora de fim:\n");
	scanf("%d",&horafim);
	 
	duracao= horafim - horain;
	
	if(horafim<horain)
		duracao =(24-horain)+ horafim;
		
		printf("Duracao:%d\n",duracao);
	
	

	return 0; 
}
