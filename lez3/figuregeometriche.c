#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

	typedef struct {

		float x;
		float y;

	} punto;
	typedef struct {

		punto vertice1;
		punto vertice2;

	} rettangolo;
	typedef struct {

		punto centro;
		float raggio;

	} cerchio;
	cerchio cerch;
	rettangolo rett; 
	float lato1, lato2, areaRet, perimetroRet;
	printf("Inserisci le coordinate x e y del primo punto del rettangolo: \n");
	scanf("%f",&rett.vertice1.x);
	scanf("%f",&rett.vertice1.y);
	printf("\nInserisci le coordinate x e y del secondo punto del rettangolo: \n");
	scanf("%f",&rett.vertice2.x);
	scanf("%f",&rett.vertice2.y);
	printf("\nInserisci le coordinate x e y del centro del cerchio: \n");
	scanf("%f",&cerch.centro.x);
	scanf("%f",&cerch.centro.y);
	printf("\nInserisci il valore del raggio: \n");
	scanf("%f",&cerch.raggio);
	lato1 = rett.vertice1.x - rett.vertice2.x;
	lato2 = rett.vertice1.y - rett.vertice2.y;
	if(lato1<0)
		lato1 = lato1 * (-1);
	if(lato2<0)
		lato2 = lato2 * (-1);
	areaRet = lato1*lato2;
	perimetroRet = (lato1*2)+(lato2*2);
	printf("\nL'area del rettangolo è uguale a: %f\n",areaRet);
	printf("\nIl perimetro del rettangolo è uguale a: %f\n",perimetroRet);
	printf("\nL'area del cerchio è uguale a %f\n",cerch.raggio*cerch.raggio*M_PI);
	printf("\nLa circonferenza del cerchio è uguale a %f\n",2*cerch.raggio*M_PI);
}