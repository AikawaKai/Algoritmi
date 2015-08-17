#include <stdio.h>

int main(void) {
	
	int n,i,j,t,start,count,increment=2,increment1=-1;
	char c;
	printf("Inserisci il numero: ");
	scanf("%d",&n);
	start = (n/2);
	count = -1;
	//righe alternate
	for(i=0;i<n;i++)
	{
		if(i==0 | i%2==0)
			c='+';
		else
			c='o';
		for(j=0;j<n;j++)
		{
			printf("%c ",c);
		}
		printf("\n");
	}
	printf("\n");
	//caratteri alternati
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j-i==0 | (j-i)%2==0)
				c='+';
			else
				c='o';
			printf("%c ",c);
		}
		printf("\n");
	}
	printf("\n");
	//triangolo
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("| ");
			}
			else if ((i-j)<0)
			{
				printf("+ ");
			}
			else
			{
				printf("o ");
			}
		}
		printf("\n");
	}
	printf("\n");
	//rombo
	printf("%d\n",start);
	if(n%2!=0)
	{
		for(i=0;i<(n/2)+1;i++)
		{
			for(j=0;j<n;j++)
			{
				if(j!=start)
				{
					printf("| ");	
				}else
				{
					count = count+2;
					for(t=0;t<count;t++)
					{
						printf("o ");
					}
					start--;
					j=j+(count-1);
				}
			}
			printf("\n");
		}
		start=1;
		count=n;
		for(i=1;i<(n/2)+1;i++)
		{
			for(j=0;j<n;j++)
			{
				if(j!=start)
				{
					printf("| ");	
				}else
				{
					count = count-2;
					for(t=0;t<count;t++)
					{
						printf("o ");
					}
					start++;
					if(count<0)
						count=0;
					j=j+(count-1);
				}
			}
			printf("\n");
		}
	}


}