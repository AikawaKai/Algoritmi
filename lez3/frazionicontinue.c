#include <stdio.h>
#include <stdlib.h>

float recursive(int i, int n, float current, int *numeri){
	
	if(n==1)
	{
		return current;
	}
	else if(i<n-2)
	{
		i++;
		return current + (float)(1/(float)(recursive(i,n,numeri[i],numeri)));

	}
	else if(i==n-2)
	{
		i++;
		return current + (1/numeri[i]);
	}
}

int main(void){
	int n, i;
	int numeri[100];
	float result;
	printf("Inserisci il numero di numeri da inserire: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&numeri[i]);
	}
	i=0;
	result = recursive(i,n,(float)numeri[i],numeri);
	printf("numero: %f\n",result);
}