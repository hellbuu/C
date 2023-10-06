#include <stdio.h>

void main () {
	//Teste com char
	
	char letra, letra1 = 'g';
	
	letra = getchar();
	
	if (letra != letra1) {
		printf("%c difere de %c", letra, letra1);
		} else {
			printf("%c eh igual a %c", letra, letra1);
		}
		
	}