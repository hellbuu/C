//funções com um único parâmetro

#include <stdio.h>
#include <stdlib.h>

int sucessor(int sucesssor){
	printf("\nO sucessor de %d eh %d", sucesssor, sucesssor + 1); //aqui a func recebe o parâmetro que inseri, muda seu nome para sucesssor e realiza o printf
}

int anterior(int antecessor){ //aqui a func recebe o parâmetro, muda seu nome e retorna o parâmetro menos 1
	return antecessor - 1;
}


int main(){
	
	int a;
	scanf("%d", &a);
	
	sucessor(a); //chamei a primeira func e inseri um parâmetro 
	printf("\nO antecessor de %d eh o %d", a, anterior(a)); //chamei a func e inseri um parâmetro
	
	return 0;
} //dois modos diferentes de fazer a mesma coisa
//achei a primeira melhor