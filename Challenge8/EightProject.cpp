#include <stdio.h>
#include <stdlib.h>


int main() {
	int Num;
	printf("veuillez taper un nombre ?\n");
	scanf("%d", &Num);
	int n1 = Num / 8;
	int r1 = Num %8;
	int n2 = n1 / 8;
	int r2 = n1 % 8;
	int n3 = n2 / 8 ;
	int r3 = n2 % 8 ;
	printf("l'octal est : %d%d%d\n", r3, r2, r1);
	
	n1 = Num / 16;
	r1 = Num % 16;
	n2 = n1 / 16;
	r2 = n1 % 16;
	n3 = n2 / 16 ;
	r3 = n2 % 16 ;
	printf("Hexadecimal est : %d%d%d\n", r3, r2, r1);
	
	return 0;
}
