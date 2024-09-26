/*Escreva uma função que receba um vetor de inteiros e seu tamanho como parâmetros e inverta a ordem dos elementos do vetor usando ponteiros. A função deve modificar o vetor original.*/

#include <stdio.h>

void inverter(int *vet, int tamanho)
{
    int temp, i;

    for( i = 0; i < tamanho/2; i++)
    {
        temp = *(vet + i);
        *(vet + i) = *(vet + (tamanho - 1 - i));
        *(vet + (tamanho - 1 - i)) = temp;        
    }
}

int main()
{
    int tam, i;

    printf("\nInsira o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam];

for ( i = 0; i < tam; i++)
{
    printf("\nInsira valores do vetor: ");
    scanf("%d", (vetor + i));
}

for ( i = 0; i < tam; i++)
{
    printf("\nPosição %d valor %d", i, vetor[i]);
}
    inverter(vetor, tam);

printf("\n\n\n");

for ( i = 0; i < tam; i++)
{
    printf("\nPosição %d valor %d", i, vetor[i]);
}

    return 0;
}