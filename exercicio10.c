#include <stdio.h>

int main(){

char nome[20],sexo;
float altura,pesoid;

printf("Digite seu nome:\n");
scanf("%s",&nome);

printf("Digite sua altura:\n");
scanf("%f",&altura);

printf("Digite seu sexo (M ou F):\n");
scanf(" %c",&sexo);

if (sexo == 'M'){

pesoid=(72.7*altura)-58;

}else {
	
	pesoid=(62.1*altura)-44.7;
	
}

printf("%s seu peso ideal: %.2f",nome,pesoid);

return 0;
}
