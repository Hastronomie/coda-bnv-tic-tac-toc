#include <stdlib.h>
#include <stdio.h>
#include "tic-tac-toe.h"
#include <unistd.h>
#include "afficherTab.h"
#include "initTab.h"

int main()
{
    int i;
    int j;
    char tab[2][2];
    initTab(tab);
    afficher(tab);
    exit(0);
}

// char table[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

// void print_table(){
//  // affiche le tableau de manière ordonnée
// }

// int check_winner(char player){
//  // après chaque coup, vérifie chaque ligne, colonne et diagonale du
// // tableau pour trouver le gagnant
// }

// int conv_1d_2d(int index){
//  // convertit un index 1D en index 2D
// }

// int is_possible(int i, int j){
//    // vérifie si la case est vide dans le tableau
//    return table[i][j] == ' ';
// }

// int total_move = 0;
// int flag = 0;

// while (total_move <= 9){

// int player1;
// scanf("%d", &pos);

// if (player1 < 1 || player1 > 9){
//    continue;
// }

// // conversion de l'index 1D en index 2D.
// int i, j = conv_1d_2d(pos);


// if (!is_possible(i, j)){
//    continue;
// }

// // place la croix du joueur à la position donnée.
// table[i][j] = 'x';

// flag = check_winner('x');

// // vérifie s'il y a un gagnant
// if (flag){
//   printf("Le joueur 1 a gagné !\n");
//   break;
// }

// // implémente de la même façon les conditions pour le joueur 2
// total_move += 1;

// }

// // si flag est faux, personne n'a gagné, donc match nul

// if (!flag){
//   printf("Match nul !\n");
// }