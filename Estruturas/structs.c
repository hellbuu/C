//estruturas

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	//relembrando vetores
	int vetor[5]; //esse vetor só armazena int
	//e se eu quiser armazenar a porra toda?
	//uso uma struct
	struct porratoda{ //porratoda não é o nome, é o tipo, poderia ser de 'tipo horário'
		int horas;
		double quebrs;  //definimos nossa estrutura mas não declaramos nada
		char r;};
	
	struct porratoda bussangueta; //bussangueta é o nome
	
	bussangueta.horas = 15;
	bussangueta.quebrs = 20.15;
	bussangueta.r = 'h';
	
	printf("%d,%.2f,%c", bussangueta.horas, bussangueta.quebrs, bussangueta.r);
}