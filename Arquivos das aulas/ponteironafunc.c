//ponteiros com estruturas
//ponteiro como parâmetro de função

#include <stdio.h>
#include <stdlib.h>

void testeVariavel(int x);
void testePonteiro(int *pX);

void main(){
	
	int teste = 5;
	int *pTeste = &teste; //meu ponteiro aponta para o endereço de x
	
	testePonteiro(pTeste); //chamo a função e passo pra ela o endereço da minha variável //ela vai no endereço da variável alterar o valor dela
	
	printf("%d\n", teste); //essa variável terá o valor modificado
	
}

void testeVariavel(int x){
	++x;
}

void testePonteiro(int *pX){ //fazer as funções dessa forma ocupa menos espaço
	++*pX;
}