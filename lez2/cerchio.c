#include <stdio.h>
#include <math.h>

int main(void){
	
	float raggio,area;
	printf("Inserisci il valore del raggio: ");
	scanf("%f",&raggio);
	area = M_PI*(pow(raggio,2));
	printf("\nL'area è uguale a: %f\n",area);

}