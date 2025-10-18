#include <stdlib.h>
#include <stdio.h>

int verifGagnant(char tab[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2] && tab[i][0] != ' ')
        {
            return 1;
        }
        if (tab[0][i] == tab[1][i] && tab[1][i] == tab[2][i] && tab[0][i] != ' ')
        {
            return 1;
        }
    }

    if (tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2] && tab[0][0] != ' ')
    {
        return 1;
    }

    if (tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0] && tab[0][2] != ' ')
    {
        return 1;
    }
    return 0;
}

int verifMatchNul(char tab[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (tab[i][j] == ' ')
            {
                return 0; // au moins une case vide
            }
        }
    }
return 1; // toutes les cases sont pleines
}