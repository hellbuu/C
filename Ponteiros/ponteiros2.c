//estruturas com ponteiros

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	struct horario{
		int horas;
		int minuto;
		int segundos;
	};
	
	struct horario agora, *depois;
	depois = &agora; //criei esse ponteiro para passar valores 
	
	depois->horas = 10;
	depois->minuto = 20;
	depois->segundos =30;
	
	printf("%d, %d, %d", depois->horas, depois->minuto, depois->segundos);
	
}