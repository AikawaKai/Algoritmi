#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n,i,j,t,k,index1,index2,pindex1,pindex2;
	int **numbers;
	printf("Inserisci il valore di n del quadrato magico: ");
	scanf("%d",&n);
	numbers =  (int **) malloc(sizeof(int *) * n);
	for(i=0;i<n;i++)
	{
		numbers[i]=(int *) malloc(sizeof(int) * n);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			numbers[i][j]=0;
			printf("%d ",numbers[i][j]);
		}
		printf("\n");
	}
	numbers[0][(n/2)]=1;
	index1=0;
	index2=(n/2);
	pindex1=index1;
	pindex2=index2;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",numbers[i][j]);
		}
		printf("\n");
	}
	for(i=2;i<=n*n;i++)
	{
		index1--;
		index2++;
		if(index1<0)
			index1=n-1;
		if(index2>n-1)
			index2=0;
		while(numbers[index1][index2]!=0)
		{
			index1=pindex1+1;
			index2=pindex2;
			pindex1=index1;
			pindex2=index2;
		}
		numbers[index1][index2]=i;

		pindex1=index1;
		pindex2=index2;
		printf("\n");
		for(t=0;t<n;t++)
		{
			for(k=0;k<n;k++)
			{
				printf("%d ",numbers[t][k]);
			}
			printf("\n");
		}
	}




}