//Gerando números aleatórios

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main () {
	srand((unsigned)time(NULL));
	
	int aleatorio = rand() % 3; //Sempre vai resultar 0, 1 ou 2
	
	int aleatoriob = 1 + (rand() % 5); //Gera restos de 0 a 4
	
	printf("%d", aleatoriob);
	
	system("pause");
} //Entendi porra nenhuma dessas divisões