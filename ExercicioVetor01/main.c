#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, vetor[10],soma;

    /*Calculando a soma de 10 valores coim vetor*/

    soma = 0;

    for(i=0;i<10;i++)
    {
        printf("Digite o valor %d do vetor: ",i+1);
        scanf("%d",&vetor[i]);

        soma = soma + vetor[i];
    }

    for(i=0;i<10;i++)
    {
        printf("O valor do vetor %d foi %d: \n",i+1,vetor[i]);
    }

    printf("A soma dos vetores resultou em: %d",soma);










    return 0;
}
