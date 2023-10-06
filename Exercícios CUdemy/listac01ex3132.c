#include <stdio.h>
#include <stdlib.h>

void main () {
	int num1 = 0, suc = 0, ant = 0, suct = 0, antd = 0;
	
	scanf("%d", &num1);
	
	suc = num1 + 1;
	ant = num1 -1;
	suct = (num1 * 3) + 1;
	antd = (num1 * 2) - 1;
	
	printf("Antecessor = %d, Numero dado = %d, Sucessor = %d\n", ant, num1, suc);
	printf("Sucessor do triplo = %d, Antecessor do dobro = %d\n", suct, antd);
	
	system("pause");
}