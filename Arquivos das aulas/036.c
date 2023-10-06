//funções char

#include <stdio.h>
#include <stdlib.h>

char retornaletra(){
	
	return '175'; //posso colocar um numero, ele vai ver que numero é esse na tabela asc
}

int main(){
	
	char letra;
	
	letra = retornaletra();
	
	printf("%c", letra);
	
	return 0;
}