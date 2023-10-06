//ponteiros1

#include <stdio.h>
#include <stdlib.h>

void main(){
	int x = 10;
	double y = 20.50;
	char letra = 'c';
	
	int *Px = &x; 
	double *Py = &y;
	char *Pletra = &letra;
	
	printf("Endereco de x = %d e valor de x = %d\n", Px, *Px); //endereço é sempre int
	printf("Endereco de y = %d e valor de y = %.2f\n", Py, *Py); //só mudo a data do valor que o ponteiro aponta
	printf("Endereco de letra = %d e valor de letra = %c", Pletra, *Pletra);
	
	//ponteiro devolve endereço
	//*ponteiro devolve valor
}