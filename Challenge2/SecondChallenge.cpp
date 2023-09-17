#include <stdio.h>
#include <stdlib.h>




int main() 
{
	float Temperature, Celsius;
	printf("ecrrivez votre temperature ?\n");
	scanf("%f", &Temperature);
	Celsius = (Temperature - 32) / 1.8;
	printf("la degre en celsius est : %.2f", Celsius);
	return 0;
}
