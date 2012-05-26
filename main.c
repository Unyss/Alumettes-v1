#include <stdio.h>
#include <stdlib.h>
int menu_alumettes();


#include <stdio.h>
#include <stdlib.h>

int main()
{

  menu_alumettes();

}
int menu_alumettes()
{
	int choix = 0;

	printf("\n\n\t+-----------------------+\n");
	printf("\t|                       |\n");
	printf("\t| Jeu des Alumettes WiP |\n");
	printf("\t|                       |\n");
	printf("\t+-----------------------+\n\n");

	getchar();

	system("cls");

	while (choix < 1 || choix > 6)

	{
	printf("\n\n-----Jeu des alumettes WiP-----");
	printf("\n\n\n");
	printf("1-Jouer\n");
	printf("2-Regles\n");
	printf("3-Preferences\n");
	printf("4-Meilleur score\n");
	printf("5-Credits/remerciements\n");
	printf("6-Quitter\n\n");
	printf("Choix :");
	scanf("%d", &choix);


	getchar();

	system("cls");

	}
 switch(choix)
   {
   case 1:
	  
	   printf("Jeu en cours de realisation...");
	
	   Alumettes_zero();
	   Alumettes_graphique(); 
	   
	   break;
   case 2:
	   printf("Regles bientot disponible...");
	   
	   break;
   case 3:
	   printf("Non disponible actuellement...");
	   
	   break;
   case 4:

	 printf("En cours de creation...");
	   
	   break;
   case 5:
	   printf("En cours de redaction...");
	   break;
	   
   case 6:
	   printf("Au revoir");
	   
	   break;
   default:
	   printf("Choix impossible");
	   
	   break;
   }
	getchar();
	getchar();

	
	

}

int enter(char *chaine, int longueur)
{
    char *positionEntree = NULL;
 
    
    if (fgets(chaine, longueur, stdin) != NULL)  
    {
        positionEntree = strchr(chaine, '\n'); 
        if (positionEntree != NULL) 
        {
            *positionEntree = '\0'; 
        }
        return 1; 
    }
    else
    {
        return 0; 
    }
}
