#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int age;
	char Sexe[1];
	char Prenom [10];
	char Nom [10];
	char Num_Tel[10];
	
	printf("Ecrivez Votre nom ?\n");
	scanf("%s", &Nom);
	printf("Ecrivez Votre Prenom ?\n");
	scanf("%s", &Prenom);
	printf("Ecrivez Votre Sexe ?\n");
	scanf("%s", &Sexe);
	printf("Ecrivez Votre age ?\n");
	scanf("%d", &age);
	printf("Ecrivez Votre Numero de Telephone ?\n");
	scanf("%s", &Num_Tel);
	
	printf("Nom : %s\n", Nom);
	printf("Prenom : %s\n", Prenom);
	printf("Sexe : %s\n", Sexe);
	printf("Nom : %d\n", age);
	printf("Numero de Telephone : %s\n", Num_Tel);
	return 0;
}
