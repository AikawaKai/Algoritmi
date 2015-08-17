#include <stdio.h>

int main(void) {

	int var,i,count=0,sum=0;
	printf("Inserisci dieci numeri: ");
	for(i= 0;i<10;i++){
		scanf("%d",&var);
		while(var=<0){
			scanf("%d",&var);
		}
		sum += var;
	}
	printf("\n La somma è %d\n",sum);
	
}