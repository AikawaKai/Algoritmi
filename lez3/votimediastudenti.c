#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i=0,j=0;
	float media1,media2;
	int voti[5][5];
	for(i=0;i<5;i++)
	{
		printf("\n\nInserisci i voti dello studente %d: ",i+1);
		for(j=0;j<5;j++)
		{
			scanf("%d",&voti[i][j]);
		}
	}

	for(i=0;i<5;i++)
	{
		printf("\n\nI voti dello studente %d: ",i+1);
		media1=0;
		media2=0;
		for(j=0;j<5;j++)
		{
			printf("%d ",voti[i][j]);
			media1=media1+voti[i][j];
			media2=media2+voti[j][i];
		}
		media1=media1/5;
		media2=media2/5;
		printf(" con media %f",media1);
		printf("\n\n Media esame %d: %f ",i+1,media2);
	}

}