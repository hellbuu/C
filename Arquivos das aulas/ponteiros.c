//ponteiros 

#include <stdio.h>
#include <stdlib.h>

/*void main(){
	
	int x = 10; //guardei esse valor (4 bits de memória)
	
	printf("%d", &x); //esse & vai me retornar o endereço da memória //isso ainda não é um ponteiro
	
	//para criar um ponteiro, preciso informar pra que tipo de data ele vai apontar
	int *ponteiro; //o '*nome' serve para dar nome ao ponteiro
	ponteiro = &x; //agora ele está apontando para o endereço de memória da variável x
	
	printf("%d\n", ponteiro); //devolve o endereço
	printf("%d", *ponteiro); //devolve o valor naquele endereço
	
}*/

void main(){
	
	int x = 10;
	int *ponteiro = &x; //ponteiro criado e apontando para o endereço de x //muito melhor assim
	
	int u = 25;
	
	*ponteiro = u; //ponteiro indicando que o endereço passa a valer u
	
	printf("%d, %d", x, u);
	
}