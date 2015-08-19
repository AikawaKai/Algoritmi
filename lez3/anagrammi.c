#include <stdio.h>
#include <stdlib.h>

void returnistogrammi (char * parola, int * countlett, int n){

	int i, j, index=0;
	char temp;
	for(i=0;i<n;i++)
	{
		temp = parola[i];
		countlett[temp-'a']++;
	}
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

int main(void){
	
	char parola1[50]={'\0'};
	char parola2[50]={'\0'};
	int istogramma1[26]={0};
	int istogramma2[26]={0};
	int i=0,j=0;
	char temp;
	printf("Inserisci la prima parola: ");
	scanf(" %c",&temp);
	while(temp!='.')
	{
		parola1[i]=temp;
		scanf(" %c",&temp);
		i++;
	}
	printf("\n\nInserisci la seconda parola: ");
	scanf(" %c",&temp);
	while(temp!='.')
	{
		parola2[j]=temp;
		scanf(" %c",&temp);
		j++;
	}
	printf("Le due parole: %s; %s;\n",parola2,parola1);
	if(i!=j)
	{
		printf("Le due frasi non sono anagrammi\n");
	}
	else
	{
		returnistogrammi(parola1, istogramma1, i);
		returnistogrammi(parola2, istogramma2, j);
		for(i=0;i<26;i++)
		{
			if(istogramma1[i]!=istogramma2[i])
			{
				printf("Le due frasi non sono anagrammi\n");
				break;
			}

		}
		printf("\n%d\n", i);
		if(i==26)
			printf("Le due frasi sono anagrammi\n");
			
	}
}

