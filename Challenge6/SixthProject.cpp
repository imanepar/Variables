#include <stdio.h>
#include <stdlib.h>




int main() {
	float rayon, Circonference ;
	const float Pi = 3.14;
	printf("Veuillez saisir le rayon ?\n");
	scanf("%f", &rayon);
	Circonference = 2 * Pi * rayon;
	printf("la Circonference est : %.2f", Circonference);
	return 0;
}
