//Switch
//Serve principalmente para menus

#include <stdio.h>

//switch case com numeros
void main () {
	
	int a;
	
	printf("Escolha entre as alternativas 1, 2 e 3: ");
	scanf("%d", &a);
	
	//char b = 'h';
	
	switch(a) {
	
	case 1:
		printf("option 1");
		break;
	case 2:
		printf("option 2");
		break;
	case 3:
		printf("option 3");
		break;
	default:
		printf("fodase");
		break;
}

//switch case com char

//switch(b) {
	//case 'f':
		//printf("\nBoa viado");
		//break;
	//case 'h':
		//printf("\nBoa viadao");
		//break;
	//default:
		//printf("\nvsf viu");
		//break;
		
}