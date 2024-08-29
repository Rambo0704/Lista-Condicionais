#include <stdio.h>

int main(){
	
	int horatrab,salariohora,salariototal,horaextra;
	
	printf("Horas trabalhas:\n");
	scanf("%d",&horatrab);
	
	printf("Digite o salario por hora:\n");
	scanf("%d",&salariohora);
	
	if (horatrab>40){
		
		salariototal = (horatrab*salariohora) + (0.5*salariohora);
	
	} else {
		salariototal = horatrab * salariohora;
	}
		printf("Salario Total: %d\n", salariototal);

	return 0;
}
