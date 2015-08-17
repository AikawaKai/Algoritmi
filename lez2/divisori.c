#include <stdio.h>

int main(void){
	
	int n,i=3,count=1;
	printf("Inserisci il numero da verificare: ");
	scanf("%d",&n);
	if(n==1 || (n!=2 && n%2==0))
	{
		printf("il numero non è primo\n");
	}
	else if(n == 2)
	{
		printf("il numero è primo\n");
	}
	else
	{
		while(count<2 && i<(n/2))
		{
			if(n%i==0)
			{
				printf("Il numero %d divide %d\n",i,n);
				count++;
			}
			i++;

		}
		if(count>1)
			printf("Il numero non è primo\n");
		else
			printf("Il numero è primo\n");
	}
}