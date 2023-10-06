//função com mais de um parâmetro

#include <stdio.h>
#include <stdlib.h>

int soma = 0;

void mostraSoma(int num1, int num2){
	int soma = num1 + num2;
	
}

void retornaSoma(){
	return soma;
	}

int main(){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	mostraSoma(a, b);
	retornaSoma();
}