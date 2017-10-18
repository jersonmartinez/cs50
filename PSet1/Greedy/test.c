#include <stdio.h>

int main(){

   int pasc[11];
   int n=11;
   int x, i, j;

   x=0;

   //valida el numero de lineas
   for (i=1; i<=n ; i++)
   {
         //Construimos el triangulo de pascal
         for (j=x; j>=0; j--)
         {
             if(j==x || j==0)
             {
                  pasc[j] = 1;
             }
             else
             {
                  pasc[j] = pasc[j] + pasc[j-1];
             }
         }

        x++;
        printf("\n");
        //Truco para imprimir el triangulo
        for (j=1; j<=n-i; j++)
             printf("   ");

        for(j=0; j<x; j++)
        {
             printf("%3d   ", pasc[j]);
        }
   }
return 0;
}