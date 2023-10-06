//programa sobre vetores
//ele pede inputs a partir do for e printa a partir do for

#include <stdio.h>
#include <stdlib.h>

void main () {
	
	int vetor[3], cont;
	
	for(cont = 0; cont < 3; cont++) {
		scanf("%d", &vetor[cont]);
	}
	
	for(cont = 0;cont < 3;cont++) {
		printf("\nposicao %d: %d", cont, vetor[cont]);
	} 
}