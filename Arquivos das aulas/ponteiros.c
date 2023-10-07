//ponteiros 

#include <stdio.h>
#include <stdlib.h>

/*void main(){
	
	int x = 10; //guardei esse valor (4 bits de memória)
	
	printf("%d", &x); //esse & vai me retornar o endereço da memória //isso ainda não é um ponteiro
	
	//para criar um ponteiro, preciso informar pra que tipo de data ele vai apontar
	int *glauber; //o '*nome' serve para dar nome ao ponteiro
	glauber = &x; //agora ele está apontando para o endereço de memória da variável x
	
	printf("%d\n", glauber); //devolve o endereço
	printf("%d", *glauber); //devolve o valor naquele endereço
	
}*/

void main(){
	
	int x = 10;
	int *filicius = &x; //ponteiro criado e apontando para o endereço de x //muito melhor assim
	
	int u = 25;
	
	*filicius = u; //ponteiro indicando que o valor no endereço de x passa a valer u
	
	printf("%d, %d, %d, %d", x, u, filicius, *filicius);
	
}