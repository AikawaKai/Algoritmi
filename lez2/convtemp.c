#include<stdio.h>

int main(void){
	float Fahrenheit;
	printf("Inserisci la temperatura in Fahrenheit: ");
	scanf("%f",&Fahrenheit);
	float celsius = (Fahrenheit-32)/1.8;
	printf("\nLa temperatura in Fahrenheit è: %f°C\n",celsius);
}