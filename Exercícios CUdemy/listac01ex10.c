#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Conversor de km/h para m/s

void main () {
	float speedkm = 0, speedms = 0; 
	
	printf("Velocidade (km/h): ");
	scanf("%f", &speedkm);
	
	speedms = speedkm / 3.6;
	
	printf("%.0f km/h = %.0f m/s.\n", speedkm, speedms);
	
	system("pause"); 
}