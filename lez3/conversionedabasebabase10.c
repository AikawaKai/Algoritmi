#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
		
	int b, i=0,j,num=0;;
	char temp;
	int n[100];	
	printf("Inserisci la base del numero: ");
	scanf("%d",&b);
	printf("\nInserisci le cifre del numero in base b: ");
	scanf(" %c",&temp);
	while(temp!='.')
	{
		n[i]=temp-'0';
		scanf(" %c",&temp);
		i++;
	}
	for(j=0;j<i;j++)
	{
		printf("%d ",n[j]);
	}
	i--;
	for(j=i;j>=0;j--)
	{
		num=num+(pow(b,i-j)*n[j]);
	}
	printf("\n\nIl numero in base 10: %d\n\n",num);


}