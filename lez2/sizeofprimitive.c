#include <stdio.h>
#include <limits.h>

int main(void){
	
	int sizeint, sizeshort, sizelong, sizefloat, sizedouble, sizelongdouble, sizechar;

	sizeint = sizeof(int);
	sizeshort = sizeof(short);
	sizelong = sizeof(long);
	sizefloat = sizeof(float);
	sizedouble = sizeof(double);
	sizelongdouble = sizeof(long double);
	sizechar = sizeof(char);

	printf("\nint: %d, short: %d, long: %d, float: %d, double: %d, long double: %d, char: %d\n",sizeint,sizeshort,sizelong,sizefloat,sizedouble,sizelongdouble,sizechar);

}