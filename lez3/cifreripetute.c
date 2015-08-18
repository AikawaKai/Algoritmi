#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n, i;
	int count[10]={0};
	printf("Inserisci il numero da controllare: ");
	scanf("%d",&n);
	count[n%10]=count[n%10]++;
	printf("%d ",n%10);
	n=n/10;
	while(n!=0)
	{
		printf("%d ",n%10);
		count[n%10]=count[n%10]++;
		n=n/10;
	}
	printf("\nEcco le cifre che si ripetono: ");
	for(i=0;i<10;i++)
	{
		if(count[i]>1)
		{
			printf("%d ",i);
		}
	}
	printf("\n\n");

}