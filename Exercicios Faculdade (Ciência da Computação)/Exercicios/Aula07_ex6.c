/*Escreva um programa em linguagem C que solicita ao usuário a quantidade de alunos de uma turma e aloca um vetor de notas (números reais). Depois de ler as notas, imprime a média aritmética.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alunos, i;
    float res = 0, soma = 0;

    printf("Insira o numero de alunos: ");
    scanf("%d", &alunos);

    float *vet = (float*) malloc(alunos * sizeof(float));

    for( i = 0; i < alunos; i++)
    {
        printf("Insira a nota do aluno %d: ", i);
        scanf("%f", vet + i);
    }

    for( i = 0; i < alunos; i++)
    {
        soma = (soma + (vet[i]));
    }

    printf("Média aritmética da turma = %.2f", res = (soma/alunos));

    free(vet);

    return 0;
}