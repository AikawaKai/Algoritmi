#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

		int giorno;
		int mese;
		int anno;

	} data;

int main (void){
	
	char data_1[11]={'\0'};
	char temp;
	int i=0,temp_value,recente_value;
	data temp_d, recente;
	recente.giorno=-1;
	recente.mese=-1;
	recente.anno=-1;
	while(strcmp(data_1,"00/00/0000")!=0)
	{
		printf("\nInserisci la data: ");
		scanf("%c",&temp);
		while(temp!='\n' && i<10)
		{
			data_1[i]=temp;
			scanf("%c",&temp);
			i++;	
		}
		printf("%s\n",data_1 );
		if(recente.giorno==-1 && recente.mese==-1 && recente.anno==-1)
		{
			recente.giorno = (int)(data_1[1]-'0') + ((data_1[0]- '0') * 10);
			recente.mese = ((data_1[4])-('0')) + ((data_1[3]-'0') * 10);
			recente.anno = ((data_1[9])-('0')) + ((data_1[8]-'0') * 10) + ((data_1[7]-'0') * 100) + ((data_1[6]-'0') * 1000);
		}
		else 
		{
			temp_d.giorno = (int)(data_1[1]-'0') + ((data_1[0]- '0') * 10);
			temp_d.mese = ((data_1[4])-('0')) + ((data_1[3]-'0') * 10);
			temp_d.anno = ((data_1[9])-('0')) + ((data_1[8]-'0') * 10) + ((data_1[7]-'0') * 100) + ((data_1[6]-'0') * 1000);
			temp_value = temp_d.anno*10000 + temp_d.mese*100 + temp_d.giorno;
			recente_value = recente.anno*10000 + recente.mese*100 + recente.giorno;
			if(temp_value>recente_value)
			{
				recente.giorno = temp_d.giorno;
				recente.mese = temp_d.mese;
				recente.anno = temp_d.anno;
			}
		}
		i=0;
	} 
	printf("\nLa più recente è %02d/%02d/%04d\n",recente.giorno,recente.mese,recente.anno);
}