#include <stdlib.h>
#include <stdio.h>

void afficher(char tab[3][3]) 
{
    printf("\n");
    for (int i = 0; i < 3; i++) 
    {
        printf(" %c | %c | %c \n", tab[i][0], tab[i][1], tab[i][2]);
        if (i < 2) 
        {
            printf("-----------\n");
        }
    }
    printf("\n");
}

void casesVides(char tab[3][3], int indices[], int *nbCases)
{
    int compteur = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (tab[i][j] == ' ')
            {
                int position = i * 3 + j + 1; // position 1 à 9
                indices[compteur] = position;
                compteur++;
            }
        }
    }
    *nbCases = compteur;
}

void positionToCoord(int pos, int *i, int *j)
{
    *i = (pos - 1) / 3;
    *j = (pos - 1) % 3;
}