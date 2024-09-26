/*Faça um programa que leia uma quantidade qualquer de números armazenando-os na memoria e pare a leitura quando o usuário entrar um número negativo. Em seguida, imprima o vetor lido. Use a função REALLOC.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet = NULL;
    int n, count = 0, i;

    while (1)
    {
        printf("Insira um numero (negativo para parar): ");
        scanf("%d", &n);

        if(n < 0){
            break;
        }

        vet = (int*) realloc(vet, (count + 1) * sizeof(int));
        vet[count] = n;
        count++;
    }
       
    for(i = 0; i < count; i++)
    {
        printf("\nvet[%d] = %d", i, vet[i]);
    }

    free(vet);
    
    return 0;
}