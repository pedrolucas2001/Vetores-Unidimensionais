#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*Escreva um programa que leia 2 vetores A e B com 5 elementos inteiros cada*/
   /*Construi um vetor C onde cada elemento de C é a soma de A + B*/
   /*Apresentar os vetores no final*/

   int i, a[5],b[5],c[5];

   for(i=0;i<5;i++)
   {
       printf("Digite o valor %d do vetor A: ",i+1);
       scanf("%d",&a[i]);
       printf("Digite o valor %d do vetor B: ",i+1);
       scanf("%d",&b[i]);

       c[i] = a[i] + b[i];
   }
   for(i=0;i<5;i++)
   {
       printf("O valor %d do vetor A foi: %d\n",i+1,a[i]);
       printf("O valor %d do vetor B foi: %d\n",i+1,b[i]);
       printf("O valor %d do vetor C foi: %d\n \n",i+1,c[i]);
    }

    return 0;
}
