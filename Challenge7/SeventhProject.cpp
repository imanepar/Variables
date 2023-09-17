#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int Num, a, b , c, d;
	printf("Veuillez saisir un nombre ? \n");
	scanf("%d", &Num);
	d = Num / 10 ;
	a = Num % 10;
	b = d / 10;
	c = d % 10;
	printf("l'inverse de 3 nombres est : %d%d%d", a, c, b);
	return 0;
}
