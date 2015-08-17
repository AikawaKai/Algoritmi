#include <stdio.h>

int main(void){
	
	char c1,c2,maxc,minc;
	int dist;
	printf("Inserisci il valore dei due char: ");
	scanf("%c",&c1);
	scanf(" %c",&c2);
	printf("\n%d %d\n",c1,c2);
	maxc = (c1>c2) ? c1 : c2;
	minc = (c1<c2) ? c1 : c2;
	dist = maxc - minc;
	printf("La distanza è: %d\n", dist);

}