/*4. Faça um programa que leia um número N e:
    1. Crie dinamicamente e leia um vetor de inteiro de N posições;
    2. Leia um numero inteiro X e conte e mostre os múltiplos desse número que existem no vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, X, i, cont = 0;

    printf("Insira um valor para N: ");
    scanf("%d", &N);

    int *vet = (int*) malloc(N * sizeof(int));

    printf("Insira um Numero X: ");
    scanf("%d", &X);

    for( i = 0; i < N; i++)
    {
        printf("Preencha o vet[%d]: ", i);
        scanf("%d", vet + i);
    }

    for( i = 0; i < N; i++)
    {
        if((vet[i]) % X == 0)
        {
            cont++;
            printf("\nO valor %d é divisível por %d (contador de multiplos = %d)", vet[i], X, cont);
        }
    }    

free(vet);

    return 0;
}