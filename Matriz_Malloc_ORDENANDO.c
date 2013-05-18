#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main ()
 {


/// TA ERRADO



  int i,j,k,m,**mat,qt=5,aux;

  printf ("digite o tamanho de linhas: ");
  scanf ("%d",&qt);
  mat=(int**)malloc(sizeof(int*)*qt);

  for (i=0;i<qt;i++)
   {
    mat[i]=(int*)malloc(sizeof(int)*qt);
   }
   printf ("\n\n");
   for(i=0;i<qt;i++)
    {
     for (j=0;j<qt;j++)                
      {
       printf ("VALOR %d %d: ",i+1,j+1);
       scanf("%d",&mat[i][j]);                                
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
printf ("\n\n");

for (i=0;i<qt;i++)
   {
     for (j=0;j<qt;j++)
      {
        for (k=0;k<qt-1;k++)
         {
          for (m=0;m<qt-1;m++)
           {
            if (mat[k][m]>mat[k][m+1])
             {
              aux=mat[k][m+1];
              mat[k][m+1]=mat[k][m];
              mat[k][m]=aux;   
             }
            }
         }    
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
