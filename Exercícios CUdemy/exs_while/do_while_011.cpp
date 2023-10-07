#include <stdio.h>

int main() {
   	int numero;  // número digitado
    int soma = 0; 

    do {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Erro: Você deve digitar um inteiro positivo.\n");
        }

    } while (numero <= 0);
    
    for (int i = 1; i <= numero; i++) {
        soma += i;
    }

    printf("Soma: %d\n", soma);
}