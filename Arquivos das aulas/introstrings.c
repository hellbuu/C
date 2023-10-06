//introdução às strings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	
	char palavra1[] = {'x', 'o', 't', 'a', ' '}; //variável do tipo char no estilo vetor para guardar muitas letras
	char palavra2[] = {'b','a','n','d','i','d','a'}; //variável do tipo char no estilo vetor para guardar muitas letras
	//char juntos[11];
	
	//bora concatenar esses dois vetores de char
	
	int i;
	for(i = 0; i < 5; i++){
		printf("%c", palavra1[i]);
		};
		
	for(i = 0; i < 7; i++){
		printf("%c", palavra2[i]);
		}
		
		};
