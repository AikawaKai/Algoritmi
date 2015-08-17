#include <stdio.h>

int main(void){
	
	int var,sum=0;
	
	printf("Inserisci i numeri da sommare: \n");
	scanf("%d",&var);
	printf("%d",var);
	while(var!=0)
	{
		if(var>0){
			sum = sum + var;
		}
		scanf("%d",&var);
		printf("%d",var);
	}
	printf ("\n La somma dei numeri è: %d",sum);
}