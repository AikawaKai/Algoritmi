#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int numeri[100]={0};
	int numero, index=0, i,j;

	printf("Inserisci i numeri: ");
	scanf("%d",&numero);
	numeri[0]=numero;
	index++;
	while(numero!=0)
	{
		scanf("%d",&numero);
		for(i=0;i<index;i++)
		{
			if(numeri[i]>numero)
			{
				break;
			}
		}
		if (i==index)
		{
			numeri[i]=numero;
		}
		else
		{
			for(j=index;j>=i;j--)
			{
				printf("%d ",j);
				numeri[j+1]=numeri[j];
			}
			numeri[i]=numero;
		}
		j=0;
		index++;

	}
	printf("\n");
	for(i=0;i<index;i++)
	{
		printf("%d ",numeri[i]);
	}

}