#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int hh, mm, am_pmV;
	char am_pm;
	printf("Inserisci l'ora e i minuti ");
	scanf("%d",&hh);
	scanf("%d",&mm);
	printf("\nÈ nel formato am/pm? (y/n) ");
	scanf(" %c",&am_pm);
	if(am_pm=='y' && hh<=12)
	{
		printf("\nAM o PM? (1 per AM, 2 per PM)");
		scanf("%d",&am_pmV);
		am_pm2hour(hh,mm,am_pmV);
	}
	else if(am_pm=='n')
	{
		hour2am_pm(hh,mm);
	}

}

void am_pm2hour(int hh, int mm, int am_pmV)
{
	printf("\n\nam_pm to hour\n\n");
	if(hh==12 && am_pmV==1)
	{
		printf("\nSono le 00:%d\n",mm);
	}
	else if(hh==12 && am_pmV==2)
	{
		printf("\nSono le 12:%d\n",mm);
	}
	else if(am_pmV==2)
	{
		hh=(hh+12)%24;
		printf("\nSono le %d:%d",hh,mm);
	}
	else if(am_pmV==1)
	{
		printf("\nSono le %d:%d",hh,mm);
	}
}

void hour2am_pm(int hh, int mm)
{
	if(hh==12)
	{
		printf("\nSono le %d:%d pm\n",hh,mm);
	}
	else if(hh==0)
	{
		printf("\nSono le 12:%d am\n",mm);
	}
	else if(hh>=12)
	{
		printf("\nSono le %d:%d pm\n",hh-12,mm);
	}
	else
	{
		printf("\nSono le %d:%d",hh,mm);
	}
	printf("\n\nhour to am_pm\n\n");
}