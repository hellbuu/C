//Gerando números aleatórios

#include <stdio.h>
#include <stlib.h>
#include <time.h>

void main () {
	srand(unsigned)time(NULL);
	
	int aleatorio = rand();
	
	printf("%d", aleatorio);
	
}