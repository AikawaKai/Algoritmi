#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i, size=0,medio;
	char temp;
	char a[100];
	printf("Inserisci la stringa da controllare: ");
	scanf("%c",&temp);
	while(temp!='.')
	{
		a[size]=temp;
		scanf("%c",&temp);
		size++;
	}
	medio=size/2;
	printf("\nLa tua frase \" %s \" di dimensione %d e con medio %d\n",a,size,medio);
	if(size%2==0)
	{
		for(i=0;i<medio;i++)
		{
			if(a[i]!=a[(size-1)-i])
			{
				break;
			}
		}
		if(i!=medio)
			printf("\nNon è un palindromo\n");
		else
			printf("\nÈ un palindromo\n");
	}
	else
	{
		for(i=0;i<medio;i++)
		{
			if(a[i]!=a[(size-1)-i])
			{
				break;
			}
		}
		if(i!=medio)
			printf("\nNon è un palindromo\n");
		else
			printf("\nÈ un palindromo\n");
	}
	

}