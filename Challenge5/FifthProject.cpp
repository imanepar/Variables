#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	float mx, my, nx, ny;
    float distance;
    printf("entrez la valeur de Mx: ");
    scanf("%f", &mx);
    printf("entrez la valeur de My: ");
    scanf("%f", &my);
    printf("entrez la valeur de Nx: ");
    scanf("%f", &nx);
    printf("entrez la valeur de Ny ");
    scanf("%f", &ny);
    distance = sqrt(pow(nx - mx, 2)+pow(ny - my, 2));
    printf("la distance est : %f", distance);
	return 0;
}
