#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main ()
 {

  int i,j,**mat,qt=5;

  printf ("digite o tamanho de linhas: ");
  scanf ("%d",&qt);
  mat=(int**)malloc(sizeof(int*)*qt);

  for (i=0;i<qt;i++)
   {
    mat[i]=(int*)malloc(sizeof(int)*qt);
   }

   for(i=0;i<qt;i++)
    {
     for (j=0;j<qt;j++)                
      {
       mat[i][j]=0;                                
      }
    }
 printf ("\n");
  
   for(i=0;i<qt;i++)
    {
     for (j=0;j<qt;j++)                
      {
       printf ("%d ",mat[i][j]);                                
      }
      printf ("\n");
    }

getch();
 }
