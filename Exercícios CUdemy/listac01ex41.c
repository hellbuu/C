#include <stdio.h>
#include <stdlib.h>

//Programa com problemas

void main () {
	float valorhora = 0, horast = 0, salario = 0;
	
	scanf("%d", &valorhora);
	scanf("%d", &horast);
	
	salario = valorhora * horast;
	
	if (horast <= 220) {
		salario = (salario * 110) / 100; 
		printf("Salário = %.2f", salario);
	}
		else if (221 < horast <= 240) {
			salario = (salario * 130) / 100; 
		printf("Salário = %.2f", salario);
		}
		else 
		salario = (salario * 150) / 100; 
		printf("Salário = %.2f", salario);
		
	
	system("pause");
}