#include <stdio.h>

int main(void){
	
	int i=1, quoto;
	printf("Inserisci il valore di n: ");
	scanf("%d",&quoto);
	if ( isprime(quoto))
	{
		printf("Il fattore primo è %d",quoto);
	}
	else
	{
		printf("I fattori primi sono ");
		do
		{ 
			i++;
			//printf("massi ha le TETTONE %d",i);
			if(quoto%i==0)
			{
				if(isprime(i))
				{
					printf(" %d ",i);
					quoto = quoto/i;
					i=1;
					if(isprime(quoto))
					{
						printf("%d\n",quoto);
						break;
					}

				}
			}
		}while(quoto!=1 && !(isprime(quoto)));
	}

}

int isprime(int n){
	
	int i=3,count=1;
	if(n==1 || (n!=2 && n%2==0))
	{
		//printf("il numero non è primo\n");
		return 0;
	}
	else if(n == 2)
	{
		//printf("il numero è primo\n");
		return 1;
	}
	else
	{
		while(count<2 && i<(n/2))
		{
			if(n%i==0)
			{
				//printf("Il numero %d divide %d\n",i,n);
				count++;
			}
			i++;

		}
		if(count>1)
		{
			//printf("Il numero non è primo\n");
			return 0;
		}
		else
		{
			//printf("Il numero è primo\n");
			return 1;
		}
	}
}