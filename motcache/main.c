#include "affichage.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// Compilation : gcc -Wall -std=c99 main.c affichage.c
// Ceci est un exemple d'utilisation de affichage.c


/*int main (int argc, char const *argv[])
{
        print_occur_t( (occur_t) {"bien",7,9,NE} );
        print_erreur(MOT_NON_TROUVE_ERREUR);
}*/

int agrmax=-1; // actual rows of grille
int agcmax=-1; // actual columns of grille
int ammax=-1;  // actual items of mots

int GrilleInput(char *g[Grow][Gcol], char *file);
int MotsInput(char *m[Mmot], char *file);
int MotCache(char *g[Grow][Gcol], char *m[Mmot]);

int main()
{
  char GrilleFile[MFNL] = {'\0'};
  char MotsFile[MFNL] = {'\0'};
  char *grille[Grow][Gcol] = {NULL};
  char *mots[Mmot] = {NULL};
  int len = 0;
  printf("Please input the Grille file name: ");
  fgets(GrilleFile,MFNL,stdin);
  len=strlen(GrilleFile);  //to remove "\n" in array input by fgets()
  GrilleFile[len-1]=GrilleFile[len];
  GrilleInput(grille, GrilleFile);
  
//to list the grille input from file after call GrilleInput()
  int i=0, j=0;

  printf("Col==||");
  for(i=0;i<=agcmax;i++) printf("%4d  |",i);
  printf("\n");
  for(i=0;i<=(2+agcmax)*7;i++) printf("=");
  printf("\n");
  for(i=0;i<=agrmax;i++)
  {
    printf("Row%2d||",i);
    for(j=0;j<=agcmax;j++) printf("%6s|", grille[i][j]);
    printf("\n");
  }

  printf("Please input the mots file name: ");
  fgets(MotsFile,MFNL,stdin);
  len=strlen(MotsFile);   //to remove "\n" in array input by fgets()
  MotsFile[len-1]=MotsFile[len];

//to list mots[] before call the MotsInput() function:
//    printf("In main(), before core call MosInput(), the Mots: ");
//    for(i=0;i<Mmot;i++)  printf("| %s ", mots[i]);
//    printf("\nNow, call MosInput(). \n");

  MotsInput(mots, MotsFile);
 
//to test the grille input after call MotsInput()
//  printf("In main(), after call MotsInput():\n");
//  for(i=0;i<Mmot;i++)  printf("| %s ", mots[i]);
//  printf("\n");

printf("Actual Grille Size: agrmax=%d, agcmax=%d; ", agrmax+1,agcmax+1);
printf("& Actual Mots Size: ammax=%d\n", ammax+1);

printf("Now, run MotCache() ... \n");
  MotCache(grille, mots);

//to free space of grill & mots
printf("--> MotCache() complete, to free the malloc in main() ...\n");
  for(i=0;i<Grow;i++)
  {
    for(j=0;j<Gcol;j++)
    { 
//printf("to free malloc --- grille[%d][%d]==%p .\n",i,j,grille[i][j]);
	if(grille[i][j]!=NULL) 
	{
	   free(grille[i][j]);
//printf("After free malloc, grille[%d][%d]==%p ! \n",i,j,grille[i][j]); 
	   grille[i][j]=NULL;
//printf("& set it to NULL,  grille[%d][%d]==%p ! \n",i,j,grille[i][j]);
	}
    }
  }

  for(i=0;i<Mmot;i++)
  { 
//printf("to free malloc --- mots[%d]==%p .\n",i,mots[i]);
	if(mots[i]!=NULL)
	{ 
//printf("the mots need to be free is: mots[%d]==%p !\n",i,mots[i]);
	   free(mots[i]); 
	   mots[i]=NULL;
	}
  }

  printf(" --- !!! malloc free succfully, the END !!! --- \n");
  return 0;
}


int GrilleInput(char *g[Grow][Gcol], char *file)
{
  FILE *fp = NULL;
  char ch = EOF;
  char mot[MotL] = {'\0'};
  int i=0,j=0,k=0;
  if((fp=fopen(file,"r"))==NULL)
  {
    printf("\nOpen Grille file %s failior!!!\n", file);
    getchar();
    exit(1);
  }
  
  ch=fgetc(fp);
  while(ch!=EOF) 
  {
    if(ch!=' ' && ch!='\t' && ch!='\n') //strings devided by space, tab and \n
    {
	mot[k]=ch;
	k++;
    }
    else if(ch=='\n')  //this part is for changing line or row
    {
	mot[k]='\0';  //add \0 while the string reach the end
	g[i][j]=(char *) malloc(strlen(mot)+1); // \0 isn't counted by strlen()
    	if(g[i][j]==NULL) exit(1);
	strcpy(g[i][j],mot);
	if(i>agrmax) agrmax=i;
 	if(j>agcmax) agcmax=j;
	i++;  //to start the next line
	k=0;
	j=0;
    }
    else  //while it's space or tab, the current string reaches the end
    {
      if(k!=0)  //to avoid the space or tab appear in head of line OR continuiously
      { 
	mot[k]='\0';  //add \0 when the string reach the end
	g[i][j]=(char *) malloc(strlen(mot)+1);
    	if(g[i][j]==NULL) exit(1);
    	strcpy(g[i][j],mot);
	if(i>agrmax) agrmax=i;
  	if(j>agcmax) agcmax=j;
    	j++;
	k=0;
      }
    }
    ch=fgetc(fp);  //!!! it works OK, when I use ch=getc(fp) here ???
  }
  if(k!=0)
  {
    mot[k]='\0';  //add \0 when the string reach the end
    g[i][j]=(char *) malloc(strlen(mot)+1);  //for the last string when get EOF
    if(g[i][j]==NULL) exit(1);
    strcpy(g[i][j],mot);
    if(i>agrmax) agrmax=i;
    if(j>agcmax) agcmax=j;
  }
  fclose(fp);
/* 
  for(i=0;i<Grow;i++)  //to test whether it works
  {
    printf("In Function GrilleInput(), Row=%d:\n",i);
    for(j=0;j<Gcol;j++) printf("|%6s", g[i][j]);
    printf("\n");
  }
*/
  if(agrmax==-1 || agcmax==-1)
  {
    printf("There is nothing in the Grille table!\n");
    exit(1);
  }
  return 0;
}


int MotsInput(char *m[Mmot], char *file)
{
  FILE *fp = NULL;
  char ch = EOF;
  char mot[MotL] = {'\0'};
  int i=0, k=0;
  if((fp=fopen(file,"r"))==NULL)
  {
    printf("\nMots format file %s open failure!!!\n", file);
    getchar();
    exit(1);
  }

  ch=fgetc(fp);
  while(ch!=EOF)
  {
    if(ch!=' ' && ch!='\t' && ch!='\n') //strings devided by space, tab, \n
    {
	mot[k]=ch;
	k++;
    }
    else //the current string reach end when it gets space, tab, \n
    {
      if(k!=0)  //to avoid the space or tab appear in head of line OR continuiously
      { 
	mot[k]='\0';  //add \0 for the end of the string
	m[i]=(char *) malloc(strlen(mot)+1);
    	if(m[i]==NULL) exit(1);
    	strcpy(m[i],mot);
printf("In MotsInput(), get mot[%d] == %s \n", i, m[i]);
	if(i>ammax) ammax=i;
	i++;
	k=0;
      }
    }
    ch=fgetc(fp);  //!!! it works OK, when I use ch=getc(fp) here ???
  }
  if(k!=0)
  {
    mot[k]='\0';  //add \0 for the end of the string
    m[i]=(char *) malloc(strlen(mot)+1);  //for the last when get EOF
    if(m[i]==NULL) exit(1);
    strcpy(m[i],mot);
    if(i>ammax) ammax=i;
  }
  
  fclose(fp);

//printf("111111\n");  
//for(i=0;i<Mmot;i++)  printf("| %s ", m[i]);
  if(ammax==-1) 
  {
    printf("Error: there is nothing in the Mots table!\n");
    exit(1);
  } 
  return 0;
}

