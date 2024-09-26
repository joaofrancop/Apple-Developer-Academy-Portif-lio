/*Escreva uma função que receba dois vetores de inteiros e seus tamanhos como parâmetros, e copie o conteúdo de um vetor para o outro usando ponteiros. A função deve criar uma cópia exata do vetor original.*/

#include <stdio.h>
#include <stdlib.h>

void copiarValores(int *vetOrigem, int tamOrigem, int *vetFinal, int tamFinal)
{
    for (int i = 0; i < tamOrigem; i ++)
    {
        vetFinal[i] = vetOrigem[i];
    }
}

int main(){

    int tam1, tam2, i;

    printf("Insira o tamanho do primeiro vetor: ");
    scanf("%d", &tam1);

    printf("Insira o tamanho do segundo vetor: ");
    scanf("%d", &tam2);

    int *vet1 = (int*) malloc(tam1 * sizeof(int));
    int *vet2 = (int*) malloc(tam1 * sizeof(int)); 

    if (vet1 == NULL || vet2 == NULL) {
        printf("Erro ao alocar memória para os vetores.\n");
        return 1;
    }

for( i = 0; i < tam1; i++)
{
    printf("\nInsira valor da posição %d vetor1: ", i);
    scanf("%d", (vet1 + i));
}

for( i = 0; i < tam2; i++)
{
    printf("\nInsira valor da posição %d vetor2: ", i);
    scanf("%d", (vet2 + i));
}

    copiarValores(vet1, tam1, vet2, tam1);

    printf("Conteúdo do vetor2 após a cópia:\n");
    for (i = 0; i < tam2; i++) {
        printf("Posição %d valor %d\n", i, vet2[i]);
    }

    free(vet1);
    free(vet2);

    return 0;
}



/*void trocarValores(int *vet1, int tam1, int *vet2, int tam2)
{
    int maiorTamanho = (tam1 < tam2) ? tam2 : tam1;
    int *temp = (int*) malloc(maiorTamanho * sizeof(int));
    int i;

    for ( i = 0; i < maiorTamanho; i++)
    {
        vet1[i] = (i < maiorTamanho) ? vet1[i] : 0;
        vet2[i] = (i < maiorTamanho) ? vet2[i] : 0;
    }

    for ( i = 0; i < maiorTamanho; i++)
    {
        *temp = *(vet1 + i);
        *(vet1 + i) = *(vet2 + i);
        *(vet2 + i) = *temp;
    }


}

int main()
{
int tamanho1, tamanho2, i;

printf("Insira o tamanho do primeiro vetor: ");
scanf("%d", &tamanho1);

printf("Insira o tamanho do segundo vetor: ");
scanf("%d", &tamanho2);

int *vetor1 = (int*) malloc(tamanho1 * sizeof(int));
int *vetor2 = (int*) malloc(tamanho2 * sizeof(int));

    if (vetor1 == NULL || vetor2 == NULL) {
        printf("Erro ao alocar memória para os vetores.\n");
        return 1;
    }

for( i = 0; i < tamanho1; i++)
{
    printf("\nInsira valor da posição %d vetor1: ", i);
    scanf("%d", (vetor1 + i));
}

for( i = 0; i < tamanho2; i++)
{
    printf("\nInsira valor da posição %d vetor2: ", i);
    scanf("%d", (vetor2 + i));
}

trocarValores( *vetor1, tamanho1, *vetor2, tamanho2);

free(vetor1);
free(vetor2);

    return 0;
}*/