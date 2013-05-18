#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main ()
 {
   int i,j,a[3][3],b[3][3],c[3][3],maxa,maxb;

  printf("PREENCHA A MATRIZ A\n\n");
  for (i=0;i<2;i++)
   {
    for (j=0;j<2;j++)
     {
      printf("PREENCHA A MATRIZ LINHA %d, COLUNA %d: ",i+1,j+1);
      scanf ("%d",&a[i][j]);
     }
   }
  printf("\n\nPREENCHA A MATRIZ B\n\n");
  for (i=0;i<2;i++)
   {
    for (j=0;j<2;j++)
     {
      printf("PREENCHA A MATRIZ LINHA %d, COLUNA %d: ",i+1,j+1);
      scanf ("%d",&b[i][j]);
     }
   }        
 
 
   for (i=0;i<2;i++)
   {
    for (j=0;j<2;j++)
     {
      if (a[i][j]>=b[i][j])
       {
        c[i][j]=a[i][j];
       }
      else
       {
        c[i][j]=b[i][j];
       }
     }//FIM J    
   }//FIM I
 
 printf("\n");
 printf("\n");
 
 for (i=0;i<2;i++)
   {
    for (j=0;j<2;j++)
     {
      printf ("%d ",c[i][j]);
     }//FIM J
     printf("\n");    
   }//FIM I
 
 getch();        
 }//
