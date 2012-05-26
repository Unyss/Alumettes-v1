#include <stdio.h>
#include <stdlib.h>

int nmbAlumettes = 0;
char pseudoUn[20], pseudoDeux[20];

void Alumettes_zero()
{
	nmbAlumettes = 21;
}

void Alumettes_graphique()
{
	int i = 0;
	system("cls");
	printf("\n\n");

	while(i != nmbAlumettes)
	{
		printf("*  ");
		i++;
	}
	printf("\n");
	i = 0;
	while(i != nmbAlumettes)
	{
		printf("|  ");
		i++;
	}
	printf("\n");
	i = 0;
	while(i != nmbAlumettes)
	{
		printf("|  ");
		i++;
	}

	printf("\n\nAlumettes restantes : %d", nmbAlumettes);

	getchar();
	getchar();

} 

void Alumettes_pseudo(int typeLevel)
{
	
	printf("Entrez votre pseudo , joueur un : ");
	enter(pseudoUn , 19);
	if(typeLevel)
	{
	printf("\n\nEntrez votre pseudo , joueur deux : ");
	enter(pseudoDeux , 19);
	printf("\n\nBienvenue %s et %s , c'est le joueur un (%s) , qui va commencer . ", pseudoUn , pseudoDeux , pseudoUn);
	}
	else
	{
	printf("Bienvenue %s . Vous allez jouer contre Pamella l'i.a .", pseudoUn);
	}
	
	
}