#include <stdio.h>

int main() {
    int numero;  // Variável para armazenar o número digitado

    for (;;) {  // Loop infinito
        printf("Digite um inteiro positivo: ");
        scanf("%d", &numero);

        if (numero > 0) {
            break;  // Sai do loop se um inteiro positivo for inserido
        } else {
            printf("Erro: Você deve digitar um inteiro positivo.\n");
        }
    }

    printf("Você digitou o número %d, que é um inteiro positivo.\n", numero);

    return 0;
}
