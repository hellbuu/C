#include <stdio.h>

int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0;  // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;  // O número não é primo
        }
    }

    return 1;  // O número é primo
}

int main() {
    int numero;  // Variável para armazenar o número digitado

    printf("Digite um inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: Você deve digitar um inteiro positivo.\n");
        return 1;  // Encerra o programa com código de erro
    }

    printf("Números primos menores ou iguais a %d:\n", numero);

    int i = 2;  // Inicia com o primeiro número primo
    while (i <= numero) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");

    return 0;
}
