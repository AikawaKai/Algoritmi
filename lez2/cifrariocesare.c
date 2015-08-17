#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int k,i;
	size_t size=0;
	char temp=' ';
	char *testo = NULL;
	printf("\nInserisci il valore di k: ");
	scanf("%d",&k);
	printf("\nInserisci il testo da cifrare: ");
	testo = (char *) malloc(size);
	while(temp!='.')
	{
		scanf(" %c",&temp);
		if(temp!='.')
		{
			size++;
			testo = (char *) realloc(testo, size);
			testo[size-1]=temp;
		}
		
	}
	printf("\nIltuo testo: %s",testo);
	for(i=0;i<size;i++)
	{
		testo[i]=(((testo[i]+k)-'a')%('a'-'z'))+'a';
	}
	printf("\nIl testo cifrato: %s\n",testo);
	free(testo);
}