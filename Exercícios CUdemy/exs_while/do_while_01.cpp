#include <stdio.h>
#include <stdlib.h>

int main() {
    double numero;  // número digitado
    int soma = 0, contador = 1;
	
	printf("Digite um inteiro positivo: ");
    scanf("%lf", &numero);
    
	// roda eternamente até o corno digitar o número certo
    while (numero <= 0 || numero != (int)numero){
    
		printf("Erro: Você deve digitar um inteiro positivo.\n");
		printf("Digite um inteiro positivo: ");
    	scanf("%lf", &numero);
    	
		}
		while(contador <= numero){
			soma = soma + contador;
			contador = ++contador;
			
		}
		
		printf("Ok, vagabundo. O resultado da soma eh %d", soma);

}