//programa sobre matrizes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {
	
	char palavra[10], len; //criou-se a variável 
	
	printf("Digite uma palavra: "); 
	
	setbuf(stdin, 0); //limpou-se o buffer
	
	fgets(palavra, 10, stdin); //colheu o input 
	
	len = strlen(palavra)-1 = '\0';
	
	printf("%s", palavra);
}