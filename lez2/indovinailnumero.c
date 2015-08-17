#include <stdio.h>
#define MAX 1000
#define MIN 0

int main(void){
	
	int x=-1,sup,inf,medio;
	char risposta = ' ';
	printf("Inserisci il valore da indovinare: ");
	while(x<MIN || x>MAX)
	{
		scanf("%d",&x);
	}
	sup=MAX;
	inf=MIN;
	medio = (sup-inf)/2;
	while(risposta != '=')
	{
		
		printf("\nIl numero è: %d?\n",medio);
		scanf("%c",&risposta);
		if(risposta == '<')
		{
			sup = medio;
			medio = inf+((sup-inf)/2);
		}
		else if(risposta == '>')
		{
			inf = medio;
			medio = inf+((sup-inf)/2);
		}
		else if(risposta == '=')
		{
			printf("Ho indovinato!\n");
		}
		printf("\n%d %d\n",inf,sup);
	}

}