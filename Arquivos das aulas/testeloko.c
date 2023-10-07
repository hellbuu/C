//teste

#include <stdio.h>

void outraFuncao(int *ponteiro) {
	int UV_Index = 10;
	int *ponteiro = &UV_Index;
}

int main() {
    printf("%d", *ponteiro);
}