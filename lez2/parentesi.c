#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i;
	size_t countaperte=0, countchiuse=0, size = 0;
	char *frase = NULL;
	char temp = ' ';
	frase = (char *) malloc(size);
	printf("Inserisci il testo da controllare:");
	while(temp!='.')
	{
		scanf(" %c",&temp);
		if(temp!='.')
		{
			size++;
			frase = (char *) realloc(frase,size);
			frase[size-1]=temp;
		}
	}
	printf("La frase ottenuta %s\n",frase);
	for(i=0;i<size;i++)
	{
		if(frase[i]=='(')
		{
			countaperte++;
		}
		else if(frase[i]==')')
		{
			countchiuse++;
		}
		if(countaperte<countchiuse)
		{
			break;
		}
	}
	if(i<size-1)
	{
		printf("La frase non è ben parentesizzata \n");
	}
	else
	{
		if(countaperte==countchiuse)
		{
			printf("La frase è ben parentesizzata \n");
		}
		else
		{
			printf("La frase non è ben parentesizzata \n");
		}
	}


}