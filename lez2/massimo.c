#include <stdio.h>

int main(void){
	
	int a,b,max;
	printf("Inserisci i due interi: ");
	scanf("%d",&a);
	scanf("%d",&b);
	max = (a < b) ? b : a; 
	printf("Il massimo: %d\n",max);

}