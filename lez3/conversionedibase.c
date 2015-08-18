#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int b, n, i=0, j;
	int cifre[100];
	printf("Inserisci il numero decimale e la base: ");
	scanf("%d",&n);
	scanf("%d",&b);
	cifre[i]=n%b;
	n=n/b;
	while(n>0)
	{
		i++;
		cifre[i]=n%b;
		n=n/b;
	}
	printf("\n\n");
	for(j=i;j>=0;j--)
	{
		printf("%d ",cifre[j]);
	}
	printf("\n\n");
}

