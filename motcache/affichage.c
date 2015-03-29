#include "affichage.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// defined in main.c
extern const int agrmax; //actual rows of grille
extern const int agcmax; //actual columns of grille
extern const int ammax;  //actual items of mots

/**
* fonction interne qui convertit de le code de direction vers une chaine
*@param dir code de direction
*@return chaine représentant dir
*/
static char * tostring(dir_t dir){
        switch (dir) 
        {
                case S : return "S";
                case N : return "N";
                case E : return "E";
                case O : return "O";
                case NE : return "NE";
                case NO : return "NO";
                case SE : return "SE";
                case SO : return "SO";
                default : return "erreur de direction";
        }
}


void print_occur_t(occur_t occur)
{
    printf( "%s %d %d %s\n", occur.mot, occur.ligne, occur.colone,
        tostring(occur.dir) );
}


void print_erreur(int err)
{
    switch (err)
    {

        case FICHIER_GRILLE_ERREUR : 
        printf("Error :  grille file does not exist or the file is blank.\n");
        break;
        case FICHIER_LISTE_MOTS_VIDE_ERREUR :
        printf("Error :  Mots file is blank.\n");
        break;
        case FICHIER_OUVERTURE_ERREUR : 
        printf("Error : fail to open file.\n");
        break;
        case NBRE_ARGUMENTS_ERREUR :
        printf("Error : Number of arguments is incorrect.\n");
        break;
        case MOT_NON_TROUVE_ERREUR :
        printf("--ERREUR-- Mots are not found in the grille.\n");
        break;

        default:
        break;
    }
}

int MotCache(char *g[Grow][Gcol], char *m[Mmot])
{
  occur_t t;  //for printing out when it matchs the request
  t.mot=(char *)malloc(MotL); //apply the memory space for t.mot
  if(t.mot == NULL) exit(1);  //exit while it can't get memory space
  int i=0,j=0,k=0,s=0,z=0;
  int mlen=0;             //the lengh of m[]
  char gt[MotL*2]={'\0'}; //for strcat() the content of g[][]
  int mark=0; 		  //set mark=1 while one g[][]==m[], then we don't need check the other direction for it.
  int acc=0;  //to count the no. of the matchs found in the grille.

  for(z=0;z<=ammax;z++)
  {
    mlen=strlen(m[z]);
    for(i=0;i<=agrmax;i++)
    {
	for(j=0;j<=agcmax;j++)
	{
	  mark=0; //reset mark to 0

	  t.dir=S;  //direction: Sorth
	  strcpy(gt,g[i][j]);
	  s=0;
	  while(strlen(gt)<mlen && (i+s)<agrmax) 
	  {
		s++;
	 	strcat(gt,g[i+s][j]);
	  }
	  if(strcmp(gt,m[z])==0)  //find MotCache Location & dir
	  {
//printf("list: m[%d]==%s; & gt==%s; and s==%d\n",z,m[z],gt,s);
		strcpy(t.mot, m[z]); t.ligne=i; t.colone=j;
//printf("s==%d, ",s);
		print_occur_t(t);
		acc++;
		if(s==0) mark=1;
//printf("mark==%d\n",mark);
	  }
	  if(mark==1) continue;

	  t.dir=N;  //direction: North
	  strcpy(gt,g[i][j]);
	  s=0;
	  while(strlen(gt)<mlen && (i-s)>0) 
	  {
		s++;
	 	strcat(gt,g[i-s][j]);
	  }
	  if(strcmp(gt,m[z])==0)  //find MotCache Location & dir
	  {
//printf("list: m[%d]==%s; & gt==%s; and s==%d\n",z,m[z],gt,s);
		strcpy(t.mot, m[z]); t.ligne=i; t.colone=j;
		print_occur_t(t);
		acc++;
	  }

	  t.dir=E;  //direction: East
	  strcpy(gt,g[i][j]);
	  s=0;
	  while(strlen(gt)<mlen && (j+s)<agcmax) 
	  {
		s++;
	 	strcat(gt,g[i][j+1]);
	  }
	  if(strcmp(gt,m[z])==0)  //find MotCache Location & dir
	  {
//printf("list: m[%d]==%s; & gt==%s; and s==%d\n",z,m[z],gt,s);
		strcpy(t.mot, m[z]); t.ligne=i; t.colone=j;
		print_occur_t(t);
		acc++;
	  }

	  t.dir=O;  //direction: West
	  strcpy(gt,g[i][j]);
	  s=0;
	  while(strlen(gt)<mlen && (j-s)>0) 
	  {
		s++;
	 	strcat(gt,g[i][j-s]);
	  }
	  if(strcmp(gt,m[z])==0)  //find MotCache Location & dir
	  {
//printf("list: m[%d]==%s; & gt==%s; and s==%d\n",z,m[z],gt,s);
		strcpy(t.mot, m[z]); t.ligne=i; t.colone=j;
		print_occur_t(t);
		acc++;
	  }

	  t.dir=NE;  //direction: North-East
	  strcpy(gt,g[i][j]);
	  s=0;
	  while(strlen(gt)<mlen && (i-s)>0 && (j+s)<agcmax) 
	  {
		s++;
	 	strcat(gt,g[i-s][j+s]);
	  }
	  if(strcmp(gt,m[z])==0)  //find MotCache Location & dir
	  {
//printf("list: m[%d]==%s; & gt==%s; and s==%d\n",z,m[z],gt,s);
		strcpy(t.mot, m[z]); t.ligne=i; t.colone=j;
		print_occur_t(t);
		acc++;
	  }

	  t.dir=NO;  //direction: North-West
	  strcpy(gt,g[i][j]);
	  s=0;
	  while(strlen(gt)<mlen && (i-s)>0 && (j-s)>0) 
	  {
		s++;
	 	strcat(gt,g[i-s][j-s]);
	  }
	  if(strcmp(gt,m[z])==0)  //find MotCache Location & dir
	  {
//printf("list: m[%d]==%s; & gt==%s; and s==%d\n",z,m[z],gt,s);
		strcpy(t.mot, m[z]); t.ligne=i; t.colone=j;
		print_occur_t(t);
		acc++;
	  }

	  t.dir=SE;  //direction: Sorth-East
	  strcpy(gt,g[i][j]);
	  s=0;
	  while(strlen(gt)<mlen && (i+s)<agrmax && (j+s)<agcmax) 
	  {
		s++;
	 	strcat(gt,g[i+s][j+s]);
	  }
	  if(strcmp(gt,m[z])==0)  //find MotCache Location & dir
	  {
//printf("list: m[%d]==%s; & gt==%s; and s==%d\n",z,m[z],gt,s);
		strcpy(t.mot, m[z]); t.ligne=i; t.colone=j;
		print_occur_t(t);
		acc++;
	  }

	  t.dir=SO;  //direction: Sorth-West
	  strcpy(gt,g[i][j]);
	  s=0;
	  while(strlen(gt)<mlen && (i+s)<agrmax && (j-s)>0) 
	  {
		s++;
	 	strcat(gt,g[i+s][j-s]);
	  }
	  if(strcmp(gt,m[z])==0)  //find MotCache Location & dir
	  {
//printf("list: m[%d]==%s; & gt==%s; and s==%d\n",z,m[z],gt,s);
		strcpy(t.mot, m[z]); t.ligne=i; t.colone=j;
		print_occur_t(t);
		acc++;
	  }
	}
    }

  }

  free(t.mot);

printf("There are %d items found in the grille which match the mots!\n", acc);
  if(acc==0) printf("No items found in the grille!\n");
  
  return 0;

}


