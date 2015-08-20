#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){

	int random_n, i, j, resto4, dirR=0, dirL=0, dirU=0, dirD=0;
	char array[10][10]={'*'};
	int index1=0,index2=0;
	enum {right,left,up,down} direction;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			array[i][j]='.';
		}
	}
	char temp='A';
	array[index1][index2]=temp;
	srand(time(NULL));
	random_n = rand();
	direction = random_n%4;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%c ",array[i][j]);
		}
		printf("\n");
	}
	while(temp!='Z')
	{
		
		if(dirR ==1 && dirL==1 && dirU==1 && dirD==1)
			break;
		if(direction==right)
		{
			index2++;
			if(array[index1][index2]!='.' || index2==10)
			{
				printf("destra occupata\n");
				dirR=1;
				index2--;
				random_n = rand();
				direction = random_n%4;
			}
			else
			{
				printf("libero\n");
				temp = temp+1;
				printf("%c\n",temp);
				array[index1][index2]=temp;
				dirR=0;
				dirL=0;
				dirU=0;
				dirD=0;
				random_n = rand();
				direction = random_n%4;
			}
		}
		else if(direction==left)
		{
			index2--;
			if(array[index1][index2]!='.' || index2==-1)
			{
				printf("sinistra occupata\n");
				dirL=1;
				index2++;
				random_n = rand();
				direction = random_n%4;
			}
			else
			{
				printf("libero\n");
				temp = temp+1;
				printf("%c\n",temp);
				array[index1][index2]=temp;
				dirR=0;
				dirL=0;
				dirU=0;
				dirD=0;
				random_n = rand();
				direction = random_n%4;
			}
		}
		else if(direction==up)
		{
			index1--;
			if(array[index1][index2]!='.' || index1==-1)
			{
				index1++;
				printf("sopra occupata\n");
				dirU=1;
				random_n = rand();
				direction = random_n%4;
			}
			else
			{
				printf("libero\n");
				temp = temp+1;
				printf("%c\n",temp);
				array[index1][index2]=temp;
				dirR=0;
				dirL=0;
				dirU=0;
				dirD=0;
				random_n = rand();
				direction = random_n%4;
			}
		}
		else
		{
			index1++;
			if(array[index1][index2]!='.' || index1==10)
			{
				index1--;
				printf("giù occupata\n");
				dirD=1;
				random_n = rand();
				direction = random_n%4;
			}
			else
			{
				printf("libero\n");
				temp = temp+1;
				printf("%c\n",temp);
				array[index1][index2]=temp;
				dirR=0;
				dirL=0;
				dirU=0;
				dirD=0;
				random_n = rand();
				direction = random_n%4;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%c ",array[i][j]);
		}
		printf("\n");
	}

}