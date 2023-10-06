#include <stdio.h>
#include <stdlib.h>

//tipos de variáveis
//int, float, double, char e boolean
//float e int são idênticos no modo de declarar e printar 

void main() {
	int a = 0;
    float b = 0;
    printf("Digite um valor para b: ");
    scanf("%f", &b);
    printf("Digite um valor para a: ");
    scanf("%d", &a);
    printf("b: %.3f", b);
    printf("\na: %d", a);
    
    //agora vamos ver o tipo char
    
    char letra = 'h';
    printf("%c", letra);
    printf("\nDigite uma letra: ");
    scanf(" %c", &letra);
    printf(":%c", letra);
    
}