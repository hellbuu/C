//Programa sobre o uso de condicionais múltiplas e conectivos

#include <stdio.h>

void main () {
	int a = 16;
	int b = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &b);
	
	if (b > 5 && a > 15) {
		printf("b eh maior que 5 ou a eh maior que 15");
	}
}
