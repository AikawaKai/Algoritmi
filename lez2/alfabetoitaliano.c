#include <stdio.h>
#include <ctype.h>

int main(void){
	
	char c;
	printf("Inserisci il char: ");
	scanf("%c",&c);
	c=tolower(c);
	if(c<='z' && c>='a')
	{
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
		{
			printf("\nÈ una vocale!\n");
		}else{
		printf("\n È una consonante!\n");
		}
	}else{
		printf("\nNon è una lettera dell'alfabeto!\n");
	}



}