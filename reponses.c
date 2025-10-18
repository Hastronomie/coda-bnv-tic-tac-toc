#include <stdlib.h>
#include <stdio.h>

int ask(int * rep, int * verif)
{
        printf("\nIndiquez le numéro de la case sur laquelle vous mettrez un O !\nLe 1 est en haut à gauche et 9 en bas à droite.\n");
	*verif = scanf("%d", rep);
}

void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}