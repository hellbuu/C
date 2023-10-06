#include <stdio.h>
#include <stdlib.h>

//Aula 010 variáveis aleatórias

void main () {
	int idadehe = 25; //criei uma variável inteira
	int idadegu = 23;
	printf("Oi, Helder. Você tem %d anos e seu irmão %d anos.", idadehe, idadegu); //printei ela só com %d que é usado para inteiras
	
	//vamos pedir para o usuário declarar o valor da variável
	int setembro;
	
	printf("\nEm que ano aconteceu o 11 de setembro? ");
	scanf("%d", &setembro); //é assim que se colhe valores de variáveis int e float (talvez double?)
	printf("11 de setembro de %d", setembro);
	
}