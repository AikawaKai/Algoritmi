#include <stdio.h>
#include <math.h>

int main(void){
	float a,b,c;
	float delta,square;
	float x1,x2;
	printf("Inserisci i tre coefficienti dell'equazione di 2°\n");
	printf("Il primo valore: ");
	scanf("%f",&a);
	printf("\nIl secondo valore: ");
	scanf("%f",&b);
	printf("\nIl terzo valore: ");
	scanf("%f",&c);
	printf("\nL'equazione: (%f)x^2 + (%f)x + (%f)",a,b,c);
	delta = pow(b,2)-(4*a*c);
	if (delta<0)
		printf("\nLa tua equazione non ha soluzione");
	else if(delta==0){
		x1=-b/(2*a);
		printf("\nLa tua equazione ha una sola soluzione: %f",x1);
			}
	else{
		square = (float) sqrtf(delta);
		x1=(-b+square)/(2*a);
		x2=(-b-square)/(2*a);
		printf("\nLa tua equazione ha due soluzioni: %f e %f\n",x1,x2);
	}
}
