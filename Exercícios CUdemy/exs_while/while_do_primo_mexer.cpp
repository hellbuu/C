#include <stdio.h>
#include <stdlib.h>

double numero;

void main(){
	
	printf("Digite um inteiro positivo: ");
    scanf("%lf", &numero);
    
	// roda eternamente até o corno digitar o número certo
    while (numero <= 0 || numero != (int)numero){
    
		printf("Erro: Você deve digitar um inteiro positivo.\n");
		printf("Digite um inteiro positivo: ");
    	scanf("%lf", &numero);
    	
		}
		while()
}