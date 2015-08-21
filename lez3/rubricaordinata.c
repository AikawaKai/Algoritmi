#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {

		char nome[50];
		char cognome[50];
		char numero[50];

	}entryrubrica;

	//Una rubrica può avere al massimo 200 entry.
typedef struct {

	short index;
	entryrubrica entry[200];

}rubrica;

void ordinaEntryRubrica(rubrica *rubrica_1, entryrubrica temp_entry){
	int i,j,k;
	for(i=0;i<(rubrica_1)->index;i++)
	{
		
		if(strcmp((rubrica_1)->entry[i].nome,temp_entry.nome)>0 || (strcmp(rubrica_1->entry[i].nome,temp_entry.nome)==0 && strcmp(rubrica_1->entry[i].cognome,temp_entry.cognome)>0))
		{
			break;
		}
	}
	if (i==rubrica_1->index)
	{
		for(j=0;j<sizeof(temp_entry.nome);j++)
			rubrica_1->entry[i].nome[j]=temp_entry.nome[j];
		for(j=0;j<sizeof(temp_entry.cognome);j++)
			rubrica_1->entry[i].cognome[j]=temp_entry.cognome[j];
		for(j=0;j<sizeof(temp_entry.numero);j++)
			rubrica_1->entry[i].numero[j]=temp_entry.numero[j];
	}
	else
	{
		for(k=rubrica_1->index;k>=i;k--)
		{
			printf("%d ",k);
			for(j=0;j<sizeof(rubrica_1->entry[k].nome);j++)
				rubrica_1->entry[k+1].nome[j]=rubrica_1->entry[k].nome[j];
			for(j=0;j<sizeof(rubrica_1->entry[k].cognome);j++)
				rubrica_1->entry[k+1].cognome[j]=rubrica_1->entry[k].cognome[j];
			for(j=0;j<sizeof(rubrica_1->entry[k].numero);j++)
				rubrica_1->entry[k+1].numero[j]=rubrica_1->entry[k].numero[j];
		}
		for(j=0;j<sizeof(temp_entry.nome);j++)
			rubrica_1->entry[i].nome[j]=temp_entry.nome[j];
		for(j=0;j<sizeof(temp_entry.cognome);j++)
			rubrica_1->entry[i].cognome[j]=temp_entry.cognome[j];
		for(j=0;j<sizeof(temp_entry.numero);j++)
			rubrica_1->entry[i].numero[j]=temp_entry.numero[j];
	}
}

int main(void){
	
	//entry della rubrica.
	// Una entry può avere un nome ed un cognome di al massimo 50 char.
	// Un numero può essere grande al massimo 20 cifre.
	
	int i;
	char continua;
	entryrubrica temp_entry;
	char temp;
	rubrica rubrica_1;
	rubrica_1.index=0;
	for(i=0;i<50;i++)
		{
			temp_entry.nome[i]='\0';
			temp_entry.cognome[i]='\0';
			temp_entry.numero[i]='\0';
		}
	printf("Vuoi inserire un utente in rubrica?((y/n))\n");
	scanf(" %c",&continua);
	while(continua=='y')
	{
		i=0;
		printf("Inserisci il nome dell'utente: \n");
		scanf(" %c",&temp);
		while(temp!='.')
		{
			temp_entry.nome[i]=temp;
			scanf(" %c",&temp);
			i++;
		}
		i=0;
		printf("Inserisci il cognome dell'utente: \n");
		scanf(" %c",&temp);
		while(temp!='.')
		{
			temp_entry.cognome[i]=temp;
			scanf(" %c",&temp);
			i++;
		}
		i=0;
		printf("Inserisci il numero dell'utente: \n");
		scanf(" %c",&temp);
		while(temp!='.')
		{
			temp_entry.numero[i]=temp;
			scanf(" %c",&temp);
			i++;
		}
		ordinaEntryRubrica(&rubrica_1, temp_entry);
		rubrica_1.index++;
		for(i=0;i<50;i++)
		{
			temp_entry.nome[i]='\0';
			temp_entry.cognome[i]='\0';
			temp_entry.numero[i]='\0';
		}
		printf("\nVuoi inserire un utente in rubrica?((y/n))\n");
		scanf(" %c",&continua);
	}
	for(i=0;i<rubrica_1.index;i++)
	{
		printf("\nEntry (%d) - Nome: %s; Cognome: %s; Numero:%s\n\n",i,rubrica_1.entry[i].nome,rubrica_1.entry[i].cognome,rubrica_1.entry[i].numero);
	}
}


