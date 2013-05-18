#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main ()
 {
  int mat1[3][3],mat2[3][3],mat3[3][3];
  int i,j;
  printf("PREENCHA A MATRIZ A\n\n");


  for (i=0;i<3;i++)
   {
    for (j=0;j<3;j++)
     {
      printf("PREENCHA A MATRIZ LINHA %d, COLUNA %d: ",i+1,j+1);
      scanf ("%d",&mat1[i][j]);
     }
   }

  printf("\n\nPREENCHA A MATRIZ B\n\n");
  for (i=0;i<3;i++)
   {
    for (j=0;j<3;j++)
     {
      printf("PREENCHA A MATRIZ LINHA %d, COLUNA %d: ",i+1,j+1);
      scanf ("%d",&mat2[i][j]);
     }
   }

system("cls");


  for (i=0;i<3;i++)
   {
    for (j=0;j<3;j++)
     {
      mat3[i][j]=mat1[i][j]+mat2[i][j];
     }
   }

  printf("A MATRIZ A\n\n");
  for (i=0;i<3;i++)
   {
    for (j=0;j<3;j++)
     {
      printf("%d ",mat1[i][j]);
     }
     printf("\n");
   }
  printf("A MATRIZ B\n\n");
  for (i=0;i<3;i++)
   {
    for (j=0;j<3;j++)
     {
      printf("%d ",mat2[i][j]);
     }
     printf("\n");
   }
  printf("A MATRIZ C\n\n");
  for (i=0;i<3;i++)
   {
    for (j=0;j<3;j++)
     {
      printf("%d ",mat3[i][j]);
     }
     printf("\n");
   }


  printf("\n");
  getch();
 }
