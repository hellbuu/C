#include <stdio.h>
#include <stdlib.h>

//Conversor de milhas para km 

void main () {
	float M = 0, K = 0;
	
	printf("Quantidade de milhas: ");
	scanf("%f", &M);
	
	K = M * 1.61;
	
	printf("%.0f milhas = %.0f quilometros\n", M, K);
	
	system("pause");
}
