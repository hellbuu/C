#include <stdio.h>

int variavelGlobal = 42; // Variável global

void funcaoA() {
    printf("Valor da variavel global na function A: %d\n", variavelGlobal);
}

void funcaoB() {
    variavelGlobal = 100; // Modifica o valor da variável global
}

int main() {
    funcaoA();
    funcaoB();
    funcaoA();
    return 0;
}
//Nesse exemplo, a variável variavelGlobal é declarada fora de qualquer função e pode ser acessada e modificada por todas as funções. A função funcaoA imprime o valor da variável global, enquanto a função funcaoB modifica o valor da variável global.

//Em resumo, para utilizar uma variável de uma função em outra função em C, você pode passar o valor como argumento ou utilizar variáveis globais. A escolha entre as duas abordagens depende do contexto específico e das necessidades do seu programa.






