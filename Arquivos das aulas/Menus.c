//Constantes com DEFINE e menu simples 
//aulas 026 e 027 juntas
//Este programa pede um input até o usuário digitar certo

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
#define MIN 1

//Criando o menu 

void main () {
	int opcao;
	
	while (opcao < MIN || opcao > MAX) {
	
	printf("Digite uma das opcoes: ");
	printf("\nOpcao 1");
	printf("\nOpcao 2");
	printf("\nOpcao 3"); //Foi escolhida uma das opções
	printf("\nOpcao 4");
	printf("\nOpcao 5\n\n");
	scanf("%d", &opcao); //Foi armazenada a opção escolhida
	
	
		case 1: 
		printf("Opcao 1 foi a escolhida");
		break;
		case 2: 
		printf("Opcao 2 foi a escolhida");
		break;
		case 3: 
		printf("Opcao 3 foi a escolhida"); //Você determina o número de opções a partir do Switch Case, ele que faz o controle 
		break;
		case 4: 
		printf("Opcao 4 foi a escolhida");
		break;
		case 5: 
		printf("Opcao 5 foi a escolhida");
		break;
		default:
		printf("Opcao invalida\n\n"); //Sempre terminar com default
		break; //O programa pararia aqui sem o While
	} 
}
}