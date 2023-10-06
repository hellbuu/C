//Criar e acessar strings
//string é um conjunto de letras

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char palavra[10];
	printf("Digite um nome: ");
	setbuf(stdin, 0); //serve para limpar a memória temporária da RAM
	fgets(palavra, 10, stdin);
	//posso mandar printar agora, só que a pessoa pode escrever uma palavra com três letras
	//mas eu reservei 10 espaços de memória
	//preciso garantir que só vamos ocupar esses três espaços
	
	int palavra(strlen(palavra)-1) = '\0';
	
	printf("%s", palavra);
}