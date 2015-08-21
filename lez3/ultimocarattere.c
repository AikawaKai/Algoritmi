#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char frase[100]={'\0'};
	char frase_s[100]={'\0'};
	char last_char, temp;
	int i=0,j=0;
	printf("Inserisci la frase da modificare:");
	scanf("%c",&temp);
	while(temp!='\n')
	{
		frase[i]=temp;
		scanf("%c",&temp);
		i++;
	}
	last_char=frase[i-1];
	printf("last char: %c\n",last_char);
	for(i=0;i<100;i++)
	{
		if(frase[i]!=last_char)
		{
			frase_s[j]=frase[i];
			j++;
		}
	}
	printf("\nLa tua frase normale: %s\n",frase);
	printf("\nLa tua frase trasformata: %s\n",frase_s);

}