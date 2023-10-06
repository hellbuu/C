#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
	
	float a = 0, quad = 0, quin = 0;
	
	printf("Digite um numero qualquer: ");
	scanf("%f", &a);
	
	//Calculando o quadrado do numero
	
	quad = pow(a, 2);
	
	//Calculando sua quinta parte
	
	quin = a / 5;
	
	//Resultado
	
	printf("O quadrado de %.0f = %.0f e sua quinta parte = %.2f\n", a, quad, quin);
	
	system("pause");
}