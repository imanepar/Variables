#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	float Num1, Num2, Num3, Num4, Somme;
 	float Moyenne;
 	printf("ecrivez le premier nombre ?\n");
 	scanf("%f",&Num1);
 	printf("ecrivez le deuxieme nombre ? \n");
 	scanf("%f", &Num2);
 	printf("ecrivez le troisieme nombre ?\n");
 	scanf("%f",&Num3);
 	printf("ecrivez le quatrieme nombre ?\n");
 	scanf("%f",&Num4);
 	Somme = (Num1 + Num2 + Num3 + Num4);
 	Moyenne = Somme / 4;
 	printf("La somme est : %.2f\n", Somme);
 	printf("La moyenne est : %.2f\n", Moyenne);
 	
	return 0;
}
