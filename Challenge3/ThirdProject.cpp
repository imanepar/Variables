#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int Number1, Number2;
	printf("entrez le premier nombre ? \n");
	scanf("%d", &Number1);
	printf("entrez le deuxieme nombre ? \n");
	scanf("%d", &Number2);
	
	printf("la somme de deux nombres : %d \n", Number1 + Number2);
	printf("la multiplication de deux nombres : %d \n", Number1 * Number2);
	printf("la division de deux nombres : %d\n", Number1 / Number2);
	printf("la soustraction de deux nombres : %d\n", Number1 - Number2);
	printf("le reste de deux nombres : %d\n", Number1 % Number2);
	return 0;
}
