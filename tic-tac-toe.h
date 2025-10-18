#ifndef __TIC_TAC_TOE_H__
#define __TIC_TAC_TOE_H__

int ask(int * rep, int * verif);
void viderBuffer();
void initTab(char tab[3][3]);
int verifGagnant(char tab[3][3]);
int verifMatchNul(char tab[3][3]);
void afficher(char tab[3][3]);
void casesVides(char tab[3][3], int indices[], int *nbCases);
void positionToCoord(int pos, int *i, int *j);

#endif
