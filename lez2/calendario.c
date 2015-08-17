#include <stdio.h>
#define SET 30
#define OTT 31
#define NOV 30
#define DIC 31
#define GEN 31
#define FEB 28
#define MAR 31
#define APR 30
#define MAG 31
#define GIU 30
#define LUG 31
#define AUG 31


int main(void){
	
	int mese, giorno,end, i, j, gg;
	printf("Inserisci il mese e il giorno di inizio mese: ");
	scanf("%d",&mese);
	scanf("%d",&giorno);
	gg = numGiorniMese(mese);
	end=7-giorno+1;
	printf("L   M   M   G   V   S   D\n");
	for(i=1;i<giorno;i++)
	{
		printf("    ");
	}
	for(i=1;i<=gg;i++)
	{
		if(i<10)
			printf("%d   ",i);
		else
			printf("%d  ",i);
		if(i==end)
		{
			printf("\n");
			end=end+7;
		}
	}	
	printf("\n");

}

int numGiorniMese(int mese)
{
	switch (mese) {

		case 1:
		return GEN;
		case 2:
		return FEB;
		case 3:
		return MAR;
		case 4:
		return APR;
		case 5:
		return MAG;
		case 6:
		return GIU;
		case 7:
		return LUG;
		case 8:
		return AUG;
		case 9:
		return SET;
		case 10:
		return OTT;
		case 11:
		return NOV;
		case 12:
		return DIC;

	}
}