#include <stdlib.h>
#include <stdio.h>

void initTab(char tab[2][2]) 
{
    int i;
    int j;
    for (i = 0; i < 3; i++) 
    {  
        for (j=0; j < 3; j++)
        {
            tab[i][j] = ' ';
        }
    }
}
