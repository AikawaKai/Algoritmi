#include <stdio.h>

int main(void){
	
	int a,b,c;
	printf("Inserisci il valore dei tre lati: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a<=b+c && b<=a+c && c<=a+b)
	{
		if(a==b && b==c){
			printf("Triangolo equilatero\n");
		}
		else if(a==b || a==c || b==c)
		{
			printf("Triangolo isoscele\n");
		}else
		{
			printf("Triangolo Scaleno\n");
		}
	}else
	printf("Non è un triangolo\n");

}