#include <stdio.h>

int main(void){
	
	int var,sum=0,count=0;
	float media;
	
	printf("Inserisci i numeri da sommare: \n");
	scanf("%d",&var);
	printf("%d",var);
	while(var!=0)
	{
		if(var>0){
			count++;
			sum = sum + var;
		}
		scanf("%d",&var);
		printf("%d",var);
	}
	media = (float) sum / (float) count;
	printf ("\n La media dei numeri è: %f",media);
}