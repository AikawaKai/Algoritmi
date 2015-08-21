#include <stdio.h>
#include <stdlib.h>

int main(void){
	

	char *frase, temp;
	int k,i,size=0;
	printf("Inserisci la frase da cifrare: ");
	frase =(char *) malloc (sizeof(char) * size);
	temp = getchar();
	while(temp!='.')
	{
		size++;
		frase =(char *) realloc (frase, sizeof(char) * size);
		frase[size-1]=temp;
		temp=getchar();

	}
	frase =(char *) realloc (frase, sizeof(char) * (size+1));
	frase[size]='\0';
	printf("%s\n",frase);
	printf("\nInserisci k: \n");
	scanf("%d",&k);
	for(i=0;i<size;i++)
	{
		if(frase[i]!=' ')
			frase[i]=((frase[i]+k)-'a')%26+'a';
	}
	printf("Frase cifrata: %s\n",frase );

}