#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int hh, mm, ss, hh1, mm1, ss1, hhd, mmd, ssd, tots,tots1,diff;
	printf ("Inserisci le ore i minuti e i secondi del primo orario: ");
	scanf("%d",&hh);
	scanf("%d",&mm);
	scanf("%d",&ss);
	printf ("Inserisci le ore i minuti e i secondi del secondo orario: ");
	scanf("%d",&hh1);
	scanf("%d",&mm1);
	scanf("%d",&ss1);

	tots = ss + mm * 60 + hh * 3600; 
	tots1 = ss1 + mm1 * 60 + hh1 * 3600;
	diff=tots-tots1;
	if(diff<0)
	{
		diff = diff*(-1);
	}

	hhd = diff/3600;
	mmd = (diff%3600)/60;
	ssd = (diff%3600)%60;

	printf("\nla differenza di orario: %d:%d:%d\n\n",hhd,mmd,ssd);

}