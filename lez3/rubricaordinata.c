#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//entry della rubrica.
	// Una entry può avere un nome ed un cognome di al massimo 50 char.
	// Un numero può essere grande al massimo 20 cifre.
	typedef struct {

		char nome[50];
		char cognome[50];
		char numero[20];

	}entryrubrica;

	//Una rubrica può avere al massimo 200 entry.
	typedef struct {

		short index;
		entryrubrica entry[200];

	}rubrica;
	int i;
	char continua;
	entryrubrica temp_entry;
	char temp;
	rubrica rubrica_1;
	rubrica_1.index=0;
	
	printf("Vuoi inserire un utente in rubrica?((y/n))\n");
	scanf(" %c",&continua);
	while(continua=='y')
	{
		i=0;
		printf("Inserisci il nome dell'utente: \n");
		scanf(" %c",&temp);
		while(temp!='.')
		{
			rubrica_1.entry[rubrica_1.index].nome[i]=temp;
			scanf(" %c",&temp);
			i++;
		}
		i=0;
		printf("Inserisci il cognome dell'utente: \n");
		scanf(" %c",&temp);
		while(temp!='.')
		{
			rubrica_1.entry[rubrica_1.index].cognome[i]=temp;
			scanf(" %c",&temp);
			i++;
		}
		i=0;
		printf("Inserisci il numero dell'utente: \n");
		scanf(" %c",&temp);
		while(temp!='.')
		{
			rubrica_1.entry[rubrica_1.index].numero[i]=temp;
			scanf(" %c",&temp);
			i++;
		}
		rubrica_1.index++;
		printf("\nVuoi inserire un utente in rubrica?((y/n))\n");
		scanf(" %c",&continua);
	}
	for(i=0;i<rubrica_1.index;i++)
	{
		printf("\nEntry (%d) - Nome: %s; Cognome: %s; Numero:%s\n\n",i,rubrica_1.entry[i].nome,rubrica_1.entry[i].cognome,rubrica_1.entry[i].numero);
	}
}
