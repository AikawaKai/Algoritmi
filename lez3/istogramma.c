#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	
	int i, j, index=0;
	char temp;
	char *lettere = (char *) malloc(sizeof(char)*index);
	int countlett[26]={0};

	printf("Inserisci le serie di lettere da controllare: ");
	scanf(" %c",&temp);
	while(temp!='.')
	{
		index++;
		lettere = (char *) realloc(lettere,sizeof(char)*index);
		lettere[index-1]=tolower(temp);
		countlett[temp-'a']++;
		scanf(" %c",&temp);
	}
	printf("\nLa tua stringa %s\n",lettere);
	for(i=0;i<26;i++)
	{
		if(countlett[i]>0)
		{
			printf("\n%c",i+'a');
			for(j=0;j<countlett[i];j++)
				printf("*");
		}
	}
	printf("\n");
}