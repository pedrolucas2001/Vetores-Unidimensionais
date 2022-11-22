#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Declaração de vetor*/

    float notas[6];
    int i;
    float media;

    /*Lendo dados para um vetor*/
    for(i=0;i<6;i++)
    {
        printf("Digite a nota %d: ",i+1);
        scanf("%f",&notas[i]);
        media = media + notas[i];   /*Somando as notas*/
    }

    media = media/6;    /*Calculando a media*/

    /*Mostrando os dados armazenados de um vetor*/
    for(i=0;i<6;i++)
    {
        printf("Nota %d: %.2f \n",i+1,notas[i]);
    }

    printf("A media do aluno foi: %.2f \n",media);
    if(media>=6)
        printf("Aluno aprovado");
    else
        printf("Aluno reprovado");
    return 0;
}
