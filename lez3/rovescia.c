#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n=100, i=-1, j,temp;
	int a[n];
	printf("Inserisci i numeri da inserire nell'array: ");
	scanf("%d",&temp);
	while(temp!=0 && i<100)
	{		
		i++;
		a[i]=temp;
		scanf("%d",&temp);
	}

	for(j=i;j>=0;j--)
	{
		printf("%d ",a[j]);
	}
}