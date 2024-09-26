/*Escreva uma função que receba dois vetores de inteiros e seus tamanhos como parâmetros, e calcule a soma desses vetores elemento por elemento usando ponteiros. A função deve armazenar o resultado em um terceiro vetor.*/

#include <stdio.h>
#include <stdlib.h>

int *somaVetores(int tamanho1, int *vetor1, int tamanho2, int *vetor2)
{
    int maiorTamanho, i;

    if( tamanho1 > tamanho2 )
    {
        maiorTamanho = tamanho1;
    } 
    else 
    {
        maiorTamanho = tamanho2;
    }

    int *vetorFinal = (int*) malloc(maiorTamanho * sizeof(int));

    if (vetorFinal == NULL) {
        printf("Erro ao alocar memória para o vetor final.\n");
        return NULL;
    }

    for (i = 0; i < tamanho1; i++)
    {
        printf("Insira o valor para posição %d do primeiro vetor: ", i);
        scanf("%d", (vetor1 + i));
    }

        for (i = 0; i < tamanho2; i++)
    {
        printf("Insira o valor para posição %d do segundo vetor: ", i);
        scanf("%d", (vetor2 + i));
    }
    
    //condição ? valor_se_verdadeiro : valor_se_falso;

    for ( i = 0; i < maiorTamanho; i++)
    {
        int vet1 = (i < tamanho1) ? vetor1[i] : 0;
        int vet2 = (i < tamanho2) ? vetor2[i] : 0;

        vetorFinal[i] = vet1 + vet2;
    }

return vetorFinal;

}

int main(){

    int tam1, tam2;

    printf("Insira o tamanho do primeiro vetor: ");
    scanf("%d",&tam1);

    printf("Insira o tamanho do segundo vetor: ");
    scanf("%d",&tam2);

    int *vet1 = (int*) malloc(tam1 * sizeof(int));
    int *vet2 = (int*) malloc(tam2 * sizeof(int));

    if (vet1 == NULL || vet2 == NULL) {
        printf("Erro ao alocar memória para os vetores.\n");
        return 1;
    }

    int *vetSoma = somaVetores(tam1, vet1, tam2, vet2);

    int maiorTamanho;

        if( tam1 > tam2 )
    {
        maiorTamanho = tam1;
    } 
    else 
    {
        maiorTamanho = tam2;
    }

    for(int i = 0; i < maiorTamanho; i++)
    {
        printf("\nValor da posição %d do ponteiro final: %d", i, vetSoma[i]);
    }

    free(vetSoma);

    free(vet1);
    free(vet2);

    return 0;
}