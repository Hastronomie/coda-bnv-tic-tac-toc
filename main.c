#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include "tic-tac-toe.h"

int main()
{
    char tab[3][3];
    int rep, i, j;
    int joueur = 1;
    int indices[9], nbCases;
    int verif;

    system("clear");
    printf("Bonjour utilisateur. Je vous met au défis de me battre sut tic-tac-toe. Je réserve les X !\n");

    srand(time(NULL));
    initTab(tab);

    while (!verifGagnant(tab) && !verifMatchNul(tab))
    {
        afficher(tab);

        if (joueur == 1) 
        {
            ask(&rep,&verif);
            system("clear");

            while (verif==0)
            {
                printf("Ce n'est pas un charactère valide, dommage !\n");
			    viderBuffer();
                system("clear");
                ask(&rep, &verif);
            }
            while (rep < 1 || rep > 9)
            {
                if (rep > 9)
                {
                    printf("Le numéro saisie est trop grand ! Il doit être compris entre 1 et 9 !\n");
			    }
			    else if (rep < 1)
			    {
				    printf("Le nombre saisie est trop petit ! Il doit être compris entre 1 et 9 !\n");
			    }
                system("clear");
			    ask(&rep, &verif);
            }
        }

        else 
        {
            sleep(1);
            casesVides(tab, indices, &nbCases);
            rep = indices[rand() % nbCases];
            printf("L'ordinateur choisit la case %d\n", rep);
        }

        positionToCoord(rep, &i, &j);

        if (tab[i][j] == ' ')
        {
            tab[i][j] = (joueur == 1) ? 'X' : 'O';
            joueur = (joueur == 1) ? 2 : 1;
        }

        else if (joueur == 1)
        {
            printf("Case déjà occupée, dommage. Recommence !\n");
        }
    }
    system("clear");
    afficher(tab);

    if (verifGagnant(tab))
    {
        if (joueur == 1)
        {
            printf("Tu as perdu mais ton aura reste intacte (〃￣︶￣)人(￣︶￣〃) !\n");
        }

        else
        {
            printf("Bravo, tu as gagné ! Tu peux m'apprendre s'il te plait ?.. o(TヘTo)\n");
        }

    }

    else 
    {
        printf("Match nul !\n");
    }
    exit (0);
}