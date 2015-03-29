#ifndef UTIL_H
#define UTIL_H
#include <stdio.h>

# define MotL 30  //Max Mot Length
# define MFNL 80  //Max File Name Length
# define Grow 10   //Number of the Grille Rows 
# define Gcol 20  //Number of the Grille Collomns
# define Mmot 100  //Max Number of the Mots to search in the grille

//Fichier de la gille corrompu ou vide
#define FICHIER_GRILLE_ERREUR 1

//Fichier liste de mots vide
#define FICHIER_LISTE_MOTS_VIDE_ERREUR 2

//Erreur d'ouverture d'un fichier
#define FICHIER_OUVERTURE_ERREUR 3

//Nombre d'arguments reçu inadéquat
#define NBRE_ARGUMENTS_ERREUR 4

// Mot non trouvé dans la grille
#define MOT_NON_TROUVE_ERREUR 5


//type énuméré représentant les différentes directions
typedef enum
{ 
    S,  // Sud
    N,  // Nord
    E,  // EST
    O,  // Ouest
    NE, // Nord-Est
    NO, // Nord-Ouest
    SE, // Sud-Est
    SO  // Sud-Ouest
} dir_t;


//Struture représentat une occurrence de mot dans la grille
typedef  struct 
{
    char * mot; // Le mot en question
    int ligne;  // La ligne de la position de début du mot dans la grille
    int colone; // La colonne de la position de début du mot dans la grille
    dir_t dir; //la direction  : S N E O etc
} occur_t;

/**
* À utiliser pour afficher un message d'erreur selon les codes
* FICHIER_GRILLE_ERREUR
* FICHIER_LISTE_MOTS_VIDE_ERREUR
* FICHIER_OUVERTURE_ERREUR
* NBRE_ARGUMENTS_ERREUR
* MOT_NON_TROUVE_ERREUR
*
* @param err code d'erreur
*/
void print_erreur(int err);

/**
* Afficher la position d'un mot dans la grille
* @param occur la position à afficher
*/
void print_occur_t(occur_t occur);

#endif
